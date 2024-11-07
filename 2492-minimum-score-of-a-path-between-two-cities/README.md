<h2><a href="https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/">2492. Minimum Score of a Path Between Two Cities</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a positive integer <code style="user-select: auto;">n</code> representing <code style="user-select: auto;">n</code> cities numbered from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>. You are also given a <strong style="user-select: auto;">2D</strong> array <code style="user-select: auto;">roads</code> where <code style="user-select: auto;">roads[i] = [a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub>, distance<sub style="user-select: auto;">i</sub>]</code> indicates that there is a <strong style="user-select: auto;">bidirectional </strong>road between cities <code style="user-select: auto;">a<sub style="user-select: auto;">i</sub></code> and <code style="user-select: auto;">b<sub style="user-select: auto;">i</sub></code> with a distance equal to <code style="user-select: auto;">distance<sub style="user-select: auto;">i</sub></code>. The cities graph is not necessarily connected.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">score</strong> of a path between two cities is defined as the <strong style="user-select: auto;">minimum </strong>distance of a road in this path.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum </strong>possible score of a path between cities </em><code style="user-select: auto;">1</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">A path is a sequence of roads between two cities.</li>
	<li style="user-select: auto;">It is allowed for a path to contain the same road <strong style="user-select: auto;">multiple</strong> times, and you can visit cities <code style="user-select: auto;">1</code> and <code style="user-select: auto;">n</code> multiple times along the path.</li>
	<li style="user-select: auto;">The test cases are generated such that there is <strong style="user-select: auto;">at least</strong> one path between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">n</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/10/12/graph11.png" style="width: 190px; height: 231px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, roads = [[1,2,9],[2,3,6],[2,4,5],[1,4,7]]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The path from city 1 to 4 with the minimum score is: 1 -&gt; 2 -&gt; 4. The score of this path is min(9,5) = 5.
It can be shown that no other path has less score.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2022/10/12/graph22.png" style="width: 190px; height: 231px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, roads = [[1,2,2],[1,3,4],[3,4,7]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The path from city 1 to 4 with the minimum score is: 1 -&gt; 2 -&gt; 1 -&gt; 3 -&gt; 4. The score of this path is min(2,2,4,7) = 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= roads.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">roads[i].length == 3</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= a<sub style="user-select: auto;">i</sub>, b<sub style="user-select: auto;">i</sub> &lt;= n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a<sub style="user-select: auto;">i</sub> != b<sub style="user-select: auto;">i</sub></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= distance<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">There are no repeated edges.</li>
	<li style="user-select: auto;">There is at least one path between <code style="user-select: auto;">1</code> and <code style="user-select: auto;">n</code>.</li>
</ul>
</div>