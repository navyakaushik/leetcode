<h2><a href="https://leetcode.com/problems/maximum-alternating-subsequence-sum/">1911. Maximum Alternating Subsequence Sum</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <strong style="user-select: auto;">alternating sum</strong> of a <strong style="user-select: auto;">0-indexed</strong> array is defined as the <strong style="user-select: auto;">sum</strong> of the elements at <strong style="user-select: auto;">even</strong> indices <strong style="user-select: auto;">minus</strong> the <strong style="user-select: auto;">sum</strong> of the elements at <strong style="user-select: auto;">odd</strong> indices.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, the alternating sum of <code style="user-select: auto;">[4,2,5,3]</code> is <code style="user-select: auto;">(4 + 5) - (2 + 3) = 4</code>.</li>
</ul>

<p style="user-select: auto;">Given an array <code style="user-select: auto;">nums</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum alternating sum</strong> of any subsequence of </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> (after <strong style="user-select: auto;">reindexing</strong> the elements of the subsequence)</em>.</p>

<ul style="user-select: auto;">
</ul>

<p style="user-select: auto;">A <strong style="user-select: auto;">subsequence</strong> of an array is a new array generated from the original array by deleting some elements (possibly none) without changing the remaining elements' relative order. For example, <code style="user-select: auto;">[2,7,4]</code> is a subsequence of <code style="user-select: auto;">[4,<u style="user-select: auto;">2</u>,3,<u style="user-select: auto;">7</u>,2,1,<u style="user-select: auto;">4</u>]</code> (the underlined elements), while <code style="user-select: auto;">[2,4,2]</code> is not.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [<u style="user-select: auto;">4</u>,<u style="user-select: auto;">2</u>,<u style="user-select: auto;">5</u>,3]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> It is optimal to choose the subsequence [4,2,5] with alternating sum (4 + 5) - 2 = 7.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [5,6,7,<u style="user-select: auto;">8</u>]
<strong style="user-select: auto;">Output:</strong> 8
<strong style="user-select: auto;">Explanation:</strong> It is optimal to choose the subsequence [8] with alternating sum 8.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [<u style="user-select: auto;">6</u>,2,<u style="user-select: auto;">1</u>,2,4,<u style="user-select: auto;">5</u>]
<strong style="user-select: auto;">Output:</strong> 10
<strong style="user-select: auto;">Explanation:</strong> It is optimal to choose the subsequence [6,1,5] with alternating sum (6 + 5) - 1 = 10.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul></div>