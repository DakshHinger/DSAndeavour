# Write your MySQL query statement below
select customer_id,COUNT(customer_id) as count_no_trans from Visits 
left join Transactions on Visits.visit_id=Transactions.visit_id
where amount IS NULL
GROUP BY customer_id;
