SELECT Max(num) AS num
FROM(
    SELECT num
    FROM MyNumbers
    GROUP BY num
    HAVING count(num) < 2
) AS SingleNumbers;
