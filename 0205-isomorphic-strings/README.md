<h2><a href="https://leetcode.com/problems/isomorphic-strings/">205. Isomorphic Strings</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code>, <em style="user-select: auto;">determine if they are isomorphic</em>.</p>

<p style="user-select: auto;">Two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> are isomorphic if the characters in <code style="user-select: auto;">s</code> can be replaced to get <code style="user-select: auto;">t</code>.</p>

<p style="user-select: auto;">All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "egg", t = "add"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">true</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> can be made identical by:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Mapping <code style="user-select: auto;">'e'</code> to <code style="user-select: auto;">'a'</code>.</li>
	<li style="user-select: auto;">Mapping <code style="user-select: auto;">'g'</code> to <code style="user-select: auto;">'d'</code>.</li>
</ul>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "foo", t = "bar"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">false</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> can not be made identical as <code style="user-select: auto;">'o'</code> needs to be mapped to both <code style="user-select: auto;">'a'</code> and <code style="user-select: auto;">'r'</code>.</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "paper", t = "title"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">true</span></p>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">t.length == s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">t</code> consist of any valid ascii character.</li>
</ul>
</div>