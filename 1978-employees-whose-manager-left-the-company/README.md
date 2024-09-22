<h2><a href="https://leetcode.com/problems/employees-whose-manager-left-the-company/">1978. Employees Whose Manager Left the Company</a></h2><h3>Easy</h3><hr><div class="sql-schema-wrapper__3VBi" style="user-select: auto;"><a class="sql-schema-link__3cEg" style="user-select: auto;">SQL Schema<svg viewBox="0 0 24 24" width="1em" height="1em" class="icon__1Md2" style="user-select: auto;"><path fill-rule="evenodd" d="M10 6L8.59 7.41 13.17 12l-4.58 4.59L10 18l6-6z" style="user-select: auto;"></path></svg></a></div><div style="user-select: auto;"><p style="user-select: auto;">Table: <code style="user-select: auto;">Employees</code></p>

<pre style="user-select: auto;">+-------------+----------+
| Column Name | Type     |
+-------------+----------+
| employee_id | int      |
| name        | varchar  |
| manager_id  | int      |
| salary      | int      |
+-------------+----------+
In SQL, employee_id is the primary key for this table.
This table contains information about the employees, their salary, and the ID of their manager. Some employees do not have a manager (manager_id is null). 
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">Find the IDs of the employees whose salary is strictly less than <code style="user-select: auto;">$30000</code> and whose manager left the company. When a manager leaves the company, their information is deleted from the <code style="user-select: auto;">Employees</code> table, but the reports still have their <code style="user-select: auto;">manager_id</code> set to the manager that left.</p>

<p style="user-select: auto;">Return the result table ordered by <code style="user-select: auto;">employee_id</code>.</p>

<p style="user-select: auto;">The result format is in the following example.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input: </strong> 
Employees table:
+-------------+-----------+------------+--------+
| employee_id | name      | manager_id | salary |
+-------------+-----------+------------+--------+
| 3           | Mila      | 9          | 60301  |
| 12          | Antonella | null       | 31000  |
| 13          | Emery     | null       | 67084  |
| 1           | Kalel     | 11         | 21241  |
| 9           | Mikaela   | null       | 50937  |
| 11          | Joziah    | 6          | 28485  |
+-------------+-----------+------------+--------+
<strong style="user-select: auto;">Output:</strong> 
+-------------+
| employee_id |
+-------------+
| 11          |
+-------------+

<strong style="user-select: auto;">Explanation:</strong> 
The employees with a salary less than $30000 are 1 (Kalel) and 11 (Joziah).
Kalel's manager is employee 11, who is still in the company (Joziah).
Joziah's manager is employee 6, who left the company because there is no row for employee 6 as it was deleted.
</pre>
</div>