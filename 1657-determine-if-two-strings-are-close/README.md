<h2><a href="https://leetcode.com/problems/determine-if-two-strings-are-close/">1657. Determine if Two Strings Are Close</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Two strings are considered <strong style="user-select: auto;">close</strong> if you can attain one from the other using the following operations:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Operation 1: Swap any two <strong style="user-select: auto;">existing</strong> characters.

	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, <code style="user-select: auto;">a<u style="user-select: auto;">b</u>cd<u style="user-select: auto;">e</u> -&gt; a<u style="user-select: auto;">e</u>cd<u style="user-select: auto;">b</u></code></li>
	</ul>
	</li>
	<li style="user-select: auto;">Operation 2: Transform <strong style="user-select: auto;">every</strong> occurrence of one <strong style="user-select: auto;">existing</strong> character into another <strong style="user-select: auto;">existing</strong> character, and do the same with the other character.
	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, <code style="user-select: auto;"><u style="user-select: auto;">aa</u>c<u style="user-select: auto;">abb</u> -&gt; <u style="user-select: auto;">bb</u>c<u style="user-select: auto;">baa</u></code> (all <code style="user-select: auto;">a</code>'s turn into <code style="user-select: auto;">b</code>'s, and all <code style="user-select: auto;">b</code>'s turn into <code style="user-select: auto;">a</code>'s)</li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">You can use the operations on either string as many times as necessary.</p>

<p style="user-select: auto;">Given two strings, <code style="user-select: auto;">word1</code> and <code style="user-select: auto;">word2</code>, return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if </em><code style="user-select: auto;">word1</code><em style="user-select: auto;"> and </em><code style="user-select: auto;">word2</code><em style="user-select: auto;"> are <strong style="user-select: auto;">close</strong>, and </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = "abc", word2 = "bca"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> You can attain word2 from word1 in 2 operations.
Apply Operation 1: "a<u style="user-select: auto;">bc</u>" -&gt; "a<u style="user-select: auto;">cb</u>"
Apply Operation 1: "<u style="user-select: auto;">a</u>c<u style="user-select: auto;">b</u>" -&gt; "<u style="user-select: auto;">b</u>c<u style="user-select: auto;">a</u>"
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = "a", word2 = "aa"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation: </strong>It is impossible to attain word2 from word1, or vice versa, in any number of operations.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> word1 = "cabbba", word2 = "abbccc"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> You can attain word2 from word1 in 3 operations.
Apply Operation 1: "ca<u style="user-select: auto;">b</u>bb<u style="user-select: auto;">a</u>" -&gt; "ca<u style="user-select: auto;">a</u>bb<u style="user-select: auto;">b</u>"
Apply Operation 2: "<u style="user-select: auto;">c</u>aa<u style="user-select: auto;">bbb</u>" -&gt; "<u style="user-select: auto;">b</u>aa<u style="user-select: auto;">ccc</u>"
Apply Operation 2: "<u style="user-select: auto;">baa</u>ccc" -&gt; "<u style="user-select: auto;">abb</u>ccc"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= word1.length, word2.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">word1</code> and <code style="user-select: auto;">word2</code> contain only lowercase English letters.</li>
</ul>
</div>