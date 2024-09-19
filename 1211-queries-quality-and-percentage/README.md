<h2><a href="https://leetcode.com/problems/queries-quality-and-percentage/">1211. Queries Quality and Percentage</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi" style="user-select: auto;"><a class="sql-schema-link__3cEg" style="user-select: auto;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="user-select: auto;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z" style="user-select: auto;"></path></svg></a></div><div style="user-select: auto;"><p style="user-select: auto;">Table: <code style="user-select: auto;">Queries</code></p>

<pre style="user-select: auto;">+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| query_name  | varchar |
| result      | varchar |
| position    | int     |
| rating      | int     |
+-------------+---------+
This table may have duplicate rows.
This table contains information collected from some queries on a database.
The <code style="user-select: auto;">position</code> column has a value from <strong style="user-select: auto;">1</strong> to <strong style="user-select: auto;">500</strong>.
The <code style="user-select: auto;">rating</code> column has a value from <strong style="user-select: auto;">1</strong> to <strong style="user-select: auto;">5</strong>. Query with <code style="user-select: auto;">rating</code> less than 3 is a poor query.
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">We define query <code style="user-select: auto;">quality</code> as:</p>

<blockquote style="user-select: auto;">
<p style="user-select: auto;">The average of the ratio between query rating and its position.</p>
</blockquote>

<p style="user-select: auto;">We also define <code style="user-select: auto;">poor query percentage</code> as:</p>

<blockquote style="user-select: auto;">
<p style="user-select: auto;">The percentage of all queries with rating less than 3.</p>
</blockquote>

<p style="user-select: auto;">Write a solution to find each <code style="user-select: auto;">query_name</code>, the <code style="user-select: auto;">quality</code> and <code style="user-select: auto;">poor_query_percentage</code>.</p>

<p style="user-select: auto;">Both <code style="user-select: auto;">quality</code> and <code style="user-select: auto;">poor_query_percentage</code> should be <strong style="user-select: auto;">rounded to 2 decimal places</strong>.</p>

<p style="user-select: auto;">Return the result table in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">The&nbsp;result format is in the following example.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
Queries table:
+------------+-------------------+----------+--------+
| query_name | result            | position | rating |
+------------+-------------------+----------+--------+
| Dog        | Golden Retriever  | 1        | 5      |
| Dog        | German Shepherd   | 2        | 5      |
| Dog        | Mule              | 200      | 1      |
| Cat        | Shirazi           | 5        | 2      |
| Cat        | Siamese           | 3        | 3      |
| Cat        | Sphynx            | 7        | 4      |
+------------+-------------------+----------+--------+
<strong style="user-select: auto;">Output:</strong> 
+------------+---------+-----------------------+
| query_name | quality | poor_query_percentage |
+------------+---------+-----------------------+
| Dog        | 2.50    | 33.33                 |
| Cat        | 0.66    | 33.33                 |
+------------+---------+-----------------------+
<strong style="user-select: auto;">Explanation:</strong> 
Dog queries quality is ((5 / 1) + (5 / 2) + (1 / 200)) / 3 = 2.50
Dog queries poor_ query_percentage is (1 / 3) * 100 = 33.33

Cat queries quality equals ((2 / 5) + (3 / 3) + (4 / 7)) / 3 = 0.66
Cat queries poor_ query_percentage is (1 / 3) * 100 = 33.33
</pre>
</div>