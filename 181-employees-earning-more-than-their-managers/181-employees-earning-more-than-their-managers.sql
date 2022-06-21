# Write your MySQL query statement below
select a.name as Employee from Employee a
	where a.salary>(select b.salary from Employee b where a.managerId=b.id);