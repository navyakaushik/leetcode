<h2><a href="https://leetcode.com/problems/longest-path-with-different-adjacent-characters/">2246. Longest Path With Different Adjacent Characters</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a <strong style="user-select: auto;">tree</strong> (i.e. a connected, undirected graph that has no cycles) <strong style="user-select: auto;">rooted</strong> at node <code style="user-select: auto;">0</code> consisting of <code style="user-select: auto;">n</code> nodes numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>. The tree is represented by a <strong style="user-select: auto;">0-indexed</strong> array <code style="user-select: auto;">parent</code> of size <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">parent[i]</code> is the parent of node <code style="user-select: auto;">i</code>. Since node <code style="user-select: auto;">0</code> is the root, <code style="user-select: auto;">parent[0] == -1</code>.</p>

<p style="user-select: auto;">You are also given a string <code style="user-select: auto;">s</code> of length <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">s[i]</code> is the character assigned to node <code style="user-select: auto;">i</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length of the <strong style="user-select: auto;">longest path</strong> in the tree such that no pair of <strong style="user-select: auto;">adjacent</strong> nodes on the path have the same character assigned to them.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/25/testingdrawio.png" style="width: 201px; height: 241px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> parent = [-1,0,0,1,1,2], s = "abacbe"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The longest path where each two adjacent nodes have different characters in the tree is the path: 0 -&gt; 1 -&gt; 3. The length of this path is 3, so 3 is returned.
It can be proven that there is no longer path that satisfies the conditions. 
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/03/25/graph2drawio.png" style="width: 201px; height: 221px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> parent = [-1,0,0,0], s = "aabc"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The longest path where each two adjacent nodes have different characters is the path: 2 -&gt; 0 -&gt; 3. The length of this path is 3, so 3 is returned.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == parent.length == s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= parent[i] &lt;= n - 1</code> for all <code style="user-select: auto;">i &gt;= 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">parent[0] == -1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">parent</code> represents a valid tree.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of only lowercase English letters.</li>
</ul>
</div>