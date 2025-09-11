delete p from Person as p
    join Person as pp
    on p.email = pp.email
    and p.id > pp.id; 
