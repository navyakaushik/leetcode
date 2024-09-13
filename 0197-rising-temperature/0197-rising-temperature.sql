# Write your MySQL query statement below
SELECT w1.id
FROM Weather AS w1 
JOIN Weather AS w2
ON DATEDIFF(w1.recordDate, W2.recordDate) = 1
WHERE w1.temperature > w2.temperature;