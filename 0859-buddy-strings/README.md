<h2><a href="https://leetcode.com/problems/buddy-strings/">859. Buddy Strings</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">s</code> and <code style="user-select: auto;">goal</code>, return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if you can swap two letters in </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> so the result is equal to </em><code style="user-select: auto;">goal</code><em style="user-select: auto;">, otherwise, return </em><code style="user-select: auto;">false</code><em style="user-select: auto;">.</em></p>

<p style="user-select: auto;">Swapping letters is defined as taking two indices <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> (0-indexed) such that <code style="user-select: auto;">i != j</code> and swapping the characters at <code style="user-select: auto;">s[i]</code> and <code style="user-select: auto;">s[j]</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, swapping at indices <code style="user-select: auto;">0</code> and <code style="user-select: auto;">2</code> in <code style="user-select: auto;">"abcd"</code> results in <code style="user-select: auto;">"cbad"</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ab", goal = "ba"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ab", goal = "ab"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> The only letters you can swap are s[0] = 'a' and s[1] = 'b', which results in "ba" != goal.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aa", goal = "aa"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> You can swap s[0] = 'a' and s[1] = 'a' to get "aa", which is equal to goal.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length, goal.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">goal</code> consist of lowercase letters.</li>
</ul>
</div>