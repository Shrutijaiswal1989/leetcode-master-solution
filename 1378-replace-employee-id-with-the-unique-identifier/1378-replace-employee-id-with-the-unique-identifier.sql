# Write your MySQL query statement below
SELECT em.unique_id as unique_id, e.name as name FROM Employees AS e LEFT JOIN EmployeeUNI AS em ON e.id=em.id; 