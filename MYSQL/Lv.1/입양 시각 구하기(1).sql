SELECT HOUR(DATETIME) as HOUR ,count(DATETIME) as COUNT from ANIMAL_OUTS WHERE HOUR(DATETIME) >= 9 AND HOUR(DATETIME) <= 19 group by HOUR order  by HOUR asc
