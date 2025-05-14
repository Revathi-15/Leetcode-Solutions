# Write your MySQL query statement below
select customer_id 
from customer 
group by customer_id
HAVING COUNT(distinct product_key)=(select count(product_key) from Product)