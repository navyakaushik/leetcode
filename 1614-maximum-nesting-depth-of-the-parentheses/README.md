<h2><a href="https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/">1614. Maximum Nesting Depth of the Parentheses</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a <strong style="user-select: auto;">valid parentheses string</strong> <code style="user-select: auto;">s</code>, return the <strong style="user-select: auto;">nesting depth</strong> of<em style="user-select: auto;"> </em><code style="user-select: auto;">s</code>. The nesting depth is the <strong style="user-select: auto;">maximum</strong> number of nested parentheses.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "(1+(2*3)+((8)/4))+1"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">3</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">Digit 8 is inside of 3 nested parentheses in the string.</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "(1)+((2))+(((3)))"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">3</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">Digit 3 is inside of 3 nested parentheses in the string.</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "()(())((()()))"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">3</span></p>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of digits <code style="user-select: auto;">0-9</code> and characters <code style="user-select: auto;">'+'</code>, <code style="user-select: auto;">'-'</code>, <code style="user-select: auto;">'*'</code>, <code style="user-select: auto;">'/'</code>, <code style="user-select: auto;">'('</code>, and <code style="user-select: auto;">')'</code>.</li>
	<li style="user-select: auto;">It is guaranteed that parentheses expression <code style="user-select: auto;">s</code> is a VPS.</li>
</ul>
</div>