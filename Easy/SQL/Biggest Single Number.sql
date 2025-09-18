/*
+-------------+------+
| Column Name | Type |
+-------------+------+
| num         | int  |
+-------------+------+
This table may contain duplicates (In other words, there is no primary key for this table in SQL).
Each row of this table contains an integer.
 

A single number is a number that appeared only once in the MyNumbers table.

Find the largest single number. If there is no single number, report null.
*/
select coalesce((
    select num from MyNumbers
        group by num
        having count(num) = 1
        order by num desc
        limit 1),
        null) as num;
