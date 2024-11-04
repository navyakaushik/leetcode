<h2><a href="https://leetcode.com/problems/minimum-time-to-collect-all-apples-in-a-tree/">1443. Minimum Time to Collect All Apples in a Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an undirected tree consisting of <code style="user-select: auto;">n</code> vertices numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n-1</code>, which has some apples in their vertices. You spend 1 second to walk over one edge of the tree. <em style="user-select: auto;">Return the minimum time in seconds you have to spend to collect all apples in the tree, starting at <strong style="user-select: auto;">vertex 0</strong> and coming back to this vertex.</em></p>

<p style="user-select: auto;">The edges of the undirected tree are given in the array <code style="user-select: auto;">edges</code>, where <code style="user-select: auto;">edges[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>]</code> means that exists an edge connecting the vertices <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code>. Additionally, there is a boolean array <code style="user-select: auto;">hasApple</code>, where <code style="user-select: auto;">hasApple[i] = true</code> means that vertex <code style="user-select: auto;">i</code> has an apple; otherwise, it does not have any apple.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/04/23/min_time_collect_apple_1.png" style="width: 300px; height: 212px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 7, edges = [[0,1],[0,2],[1,4],[1,5],[2,3],[2,6]], hasApple = [false,false,true,false,true,true,false]
<strong style="user-select: auto;">Output:</strong> 8 
<strong style="user-select: auto;">Explanation:</strong> The figure above represents the given tree where red vertices have an apple. One optimal path to collect all apples is shown by the green arrows.  
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/04/23/min_time_collect_apple_2.png" style="width: 300px; height: 212px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 7, edges = [[0,1],[0,2],[1,4],[1,5],[2,3],[2,6]], hasApple = [false,false,true,false,false,true,false]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> The figure above represents the given tree where red vertices have an apple. One optimal path to collect all apples is shown by the green arrows.  
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 7, edges = [[0,1],[0,2],[1,4],[1,5],[2,3],[2,6]], hasApple = [false,false,false,false,false,false,false]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges.length == n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">edges[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= a<sub style="user-select: auto;">i</sub> &lt; b<sub style="user-select: auto;">i</sub> &lt;= n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">hasApple.length == n</code></li>
</ul>
</div>