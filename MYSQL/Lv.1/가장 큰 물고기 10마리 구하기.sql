select ID, max(LENGTH) as LENGTH from FISH_INFO where   id != 4 and id !=5 and LENGTH is not null group by ID  order by LENGTH desc,  ID asc
