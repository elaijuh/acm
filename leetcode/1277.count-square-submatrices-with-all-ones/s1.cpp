// OJ: https://leetcode.com/problems/count-square-submatrices-with-all-ones/
// Author: github.com/elaijuh
// Time: O(mn)
// Space: O()

//  DP
class Solution {
 public:
  int countSquares(vector<vector<int>>& matrix) {
    int ans = 0;
    for (int i = 0; i < matrix.size(); i++)
      for (int j = 0; j < matrix[0].size(); j++) {
        if (i > 0 && j > 0 && matrix[i][j] > 0)
          matrix[i][j] += min(matrix[i - 1][j - 1],
                              min(matrix[i][j - 1], matrix[i - 1][j]));
        ans += matrix[i][j];
      }
    return ans;
  }
};