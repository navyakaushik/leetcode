<h2><a href="https://leetcode.com/problems/valid-parentheses/">20. Valid Parentheses</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> containing just the characters <code style="user-select: auto;">'('</code>, <code style="user-select: auto;">')'</code>, <code style="user-select: auto;">'{'</code>, <code style="user-select: auto;">'}'</code>, <code style="user-select: auto;">'['</code> and <code style="user-select: auto;">']'</code>, determine if the input string is valid.</p>

<p style="user-select: auto;">An input string is valid if:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Open brackets must be closed by the same type of brackets.</li>
	<li style="user-select: auto;">Open brackets must be closed in the correct order.</li>
	<li style="user-select: auto;">Every close bracket has a corresponding open bracket of the same type.</li>
</ol>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "()"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">true</span></p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "()[]{}"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">true</span></p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "(]"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">false</span></p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 4:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "([])"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">true</span></p>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of parentheses only <code style="user-select: auto;">'()[]{}'</code>.</li>
</ul>
</div>