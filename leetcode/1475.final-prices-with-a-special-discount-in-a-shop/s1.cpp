// OJ:
// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
// Author: github.com/elaijuh
// Time: O(n^2)
// Space: O()
class Solution {
 public:
  vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    for (int i = 0; i < n; ++i)
      for (int j = i + 1; j < n; ++j)
        if (prices[j] <= prices[i]) {
          prices[i] -= prices[j];
          break;
        }
    return prices;
  }
};
