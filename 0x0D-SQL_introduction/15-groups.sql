-- Lists records with the same score in the second_table
SELECT score, COUNT('score') as number from second_table
GROUP BY score
ORDER BY score DESC;

