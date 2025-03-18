# Write your MySQL query statement below
SELECT x.user_id,ROUND(COALESCE(count(CASE WHEN y.action='confirmed' THEN 1 END)/count(*),0),2) AS confirmation_rate 
FROM signups x
LEFT JOIN Confirmations y ON x.user_id=y.user_id
GROUP BY x.user_id;