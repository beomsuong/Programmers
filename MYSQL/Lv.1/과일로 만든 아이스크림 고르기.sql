SELECT a.FLAVOR  from  FIRST_HALF  as a ,ICECREAM_INFO  as b where a.FLAVOR= b.FLAVOR and b.INGREDIENT_TYPE like 'fruit_based' and a.TOTAL_ORDER >3000 order by a.TOTAL_ORDER desc
