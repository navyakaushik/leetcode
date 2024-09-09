<h2><a href="https://leetcode.com/problems/number-of-1-bits/">191. Number of 1 Bits</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Write a function that takes the binary representation of a positive integer and returns the number of <span data-keyword="set-bit" style="user-select: auto;">set bits</span> it has (also known as the <a href="http://en.wikipedia.org/wiki/Hamming_weight" target="_blank" style="user-select: auto;">Hamming weight</a>).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">n = 11</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">3</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The input binary string <strong style="user-select: auto;">1011</strong> has a total of three set bits.</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">n = 128</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">1</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The input binary string <strong style="user-select: auto;">10000000</strong> has a total of one set bit.</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">n = 2147483645</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">30</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The input binary string <strong style="user-select: auto;">1111111111111111111111111111101</strong> has a total of thirty set bits.</p>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow up:</strong> If this function is called many times, how would you optimize it?</div>