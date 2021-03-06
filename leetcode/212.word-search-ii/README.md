# [212. Word Search II (Hard)](https://leetcode.com/problems/word-search-ii/)

<p>Given a 2D board and a list of words from the dictionary, find all words in the board.</p>

<p>Each word must be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once in a word.</p>

<p>&nbsp;</p>

<p><strong>Example:</strong></p>

<pre><strong>Input:</strong> 
<b>board </b>= [
  ['<span style="color:#d70">o</span>','<span style="color:#d70">a</span>','a','n'],
  ['e','<span style="color:#d30">t</span>','<span style="color:#d00">a</span>','<span style="color:#d00">e</span>'],
  ['i','<span style="color:#d70">h</span>','k','r'],
  ['i','f','l','v']
]
<b>words</b> = <code>["oath","pea","eat","rain"]</code>

<strong>Output:&nbsp;</strong><code>["eat","oath"]</code>
</pre>

<p>&nbsp;</p>

<p><b>Note:</b></p>

<ol>
	<li>All inputs are consist of lowercase letters <code>a-z</code>.</li>
	<li>The values of&nbsp;<code>words</code> are distinct.</li>
</ol>

**Related Topics**:  
[Backtracking](https://leetcode.com/tag/backtracking/), [Trie](https://leetcode.com/tag/trie/)

**Similar Questions**:

- [Word Search (Medium)](https://leetcode.com/problems/word-search/)
- [Unique Paths III (Hard)](https://leetcode.com/problems/unique-paths-iii/)
