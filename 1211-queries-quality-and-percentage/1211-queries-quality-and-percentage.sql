# Write your MySQL query statement below

SELECT query_name, ROUND(avg(rating/position),2) as quality,
ROUND(SUM(rating<3)*100/COUNT(rating),2) AS poor_query_percentage
FROM Queries WHERE query_name IS NOT NULL
GROUP BY query_name