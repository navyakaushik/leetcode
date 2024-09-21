<h2><a href="https://leetcode.com/problems/biggest-single-number/">619. Biggest Single Number</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi" style="user-select: auto;"><a class="sql-schema-link__3cEg" style="user-select: auto;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="user-select: auto;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z" style="user-select: auto;"></path></svg></a></div><div style="user-select: auto;"><p style="user-select: auto;">Table: <code style="user-select: auto;">MyNumbers</code></p>

<pre style="user-select: auto;">+-------------+------+
| Column Name | Type |
+-------------+------+
| num         | int  |
+-------------+------+
This table may contain duplicates (In other words, there is no primary key for this table in SQL).
Each row of this table contains an integer.
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">single number</strong> is a number that appeared only once in the <code style="user-select: auto;">MyNumbers</code> table.</p>

<p style="user-select: auto;">Find the largest <strong style="user-select: auto;">single number</strong>. If there is no <strong style="user-select: auto;">single number</strong>, report <code style="user-select: auto;">null</code>.</p>

<p style="user-select: auto;">The result format is in the following example.</p>
<ptable style="user-select: auto;"> </ptable>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
MyNumbers table:
+-----+
| num |
+-----+
| 8   |
| 8   |
| 3   |
| 3   |
| 1   |
| 4   |
| 5   |
| 6   |
+-----+
<strong style="user-select: auto;">Output:</strong> 
+-----+
| num |
+-----+
| 6   |
+-----+
<strong style="user-select: auto;">Explanation:</strong> The single numbers are 1, 4, 5, and 6.
Since 6 is the largest single number, we return it.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
MyNumbers table:
+-----+
| num |
+-----+
| 8   |
| 8   |
| 7   |
| 7   |
| 3   |
| 3   |
| 3   |
+-----+
<strong style="user-select: auto;">Output:</strong> 
+------+
| num  |
+------+
| null |
+------+
<strong style="user-select: auto;">Explanation:</strong> There are no single numbers in the input table so we return null.
</pre>
</div>