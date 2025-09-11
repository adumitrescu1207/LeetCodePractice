select w.id as Id 
    from Weather as w
    join Weather as ww
    on datediff(w.recordDate, ww.recordDate) = 1 
    where w.temperature > ww.temperature;
