<h2><a href="https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/">2356. Number of Unique Subjects Taught by Each Teacher</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi" style="user-select: auto;"><a class="sql-schema-link__3cEg" style="user-select: auto;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="user-select: auto;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z" style="user-select: auto;"></path></svg></a></div><div style="user-select: auto;"><p style="user-select: auto;">Table: <code style="user-select: auto;">Teacher</code></p>

<pre style="user-select: auto;">+-------------+------+
| Column Name | Type |
+-------------+------+
| teacher_id  | int  |
| subject_id  | int  |
| dept_id     | int  |
+-------------+------+
(subject_id, dept_id) is the primary key (combinations of columns with unique values) of this table.
Each row in this table indicates that the teacher with teacher_id teaches the subject subject_id in the department dept_id.
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">Write a solution to calculate&nbsp;the number of unique subjects each teacher teaches in the university.</p>

<p style="user-select: auto;">Return the result table in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">The&nbsp;result format is shown in the following example.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
Teacher table:
+------------+------------+---------+
| teacher_id | subject_id | dept_id |
+------------+------------+---------+
| 1          | 2          | 3       |
| 1          | 2          | 4       |
| 1          | 3          | 3       |
| 2          | 1          | 1       |
| 2          | 2          | 1       |
| 2          | 3          | 1       |
| 2          | 4          | 1       |
+------------+------------+---------+
<strong style="user-select: auto;">Output:</strong>  
+------------+-----+
| teacher_id | cnt |
+------------+-----+
| 1          | 2   |
| 2          | 4   |
+------------+-----+
<strong style="user-select: auto;">Explanation:</strong> 
Teacher 1:
  - They teach subject 2 in departments 3 and 4.
  - They teach subject 3 in department 3.
Teacher 2:
  - They teach subject 1 in department 1.
  - They teach subject 2 in department 1.
  - They teach subject 3 in department 1.
  - They teach subject 4 in department 1.
</pre>
</div>