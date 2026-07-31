# Write your MySQL query statement below
select c.name AS Customers from Customers c where id not in(select customerId from Orders);