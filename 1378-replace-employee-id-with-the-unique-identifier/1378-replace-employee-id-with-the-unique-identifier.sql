SELECT e.name, en.unique_id
FROM Employees as e
LEFT JOIN EmployeeUNI as en
ON e.id = en.id;

