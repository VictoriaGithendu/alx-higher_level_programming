-- Displays the average temperature of 3 top cities during July and August
SELECT city, AVG(value) as avg_temp
FROM temperatures
WHERE month = 7 OR month = 8
GROUP BY city
ORDER BY avg_temp DESC
LIMIT 3;

