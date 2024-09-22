<h2><a href="https://leetcode.com/problems/exchange-seats/">626. Exchange Seats</a></h2><h3>Medium</h3><hr><div class="sql-schema-wrapper__3VBi" style="user-select: auto;"><a class="sql-schema-link__3cEg" style="user-select: auto;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="user-select: auto;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z" style="user-select: auto;"></path></svg></a></div><div style="user-select: auto;"><p style="user-select: auto;">Table: <code style="user-select: auto;">Seat</code></p>

<pre style="user-select: auto;">+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| student     | varchar |
+-------------+---------+
id is the primary key (unique value) column for this table.
Each row of this table indicates the name and the ID of a student.
The ID sequence always starts from 1 and increments continuously.
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">Write a solution to swap the seat id of every two consecutive students. If the number of students is odd, the id of the last student is not swapped.</p>

<p style="user-select: auto;">Return the result table ordered by <code style="user-select: auto;">id</code> <strong style="user-select: auto;">in ascending order</strong>.</p>

<p style="user-select: auto;">The result format is in the following example.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
Seat table:
+----+---------+
| id | student |
+----+---------+
| 1  | Abbot   |
| 2  | Doris   |
| 3  | Emerson |
| 4  | Green   |
| 5  | Jeames  |
+----+---------+
<strong style="user-select: auto;">Output:</strong> 
+----+---------+
| id | student |
+----+---------+
| 1  | Doris   |
| 2  | Abbot   |
| 3  | Green   |
| 4  | Emerson |
| 5  | Jeames  |
+----+---------+
<strong style="user-select: auto;">Explanation:</strong> 
Note that if the number of students is odd, there is no need to change the last one's seat.
</pre>
</div>