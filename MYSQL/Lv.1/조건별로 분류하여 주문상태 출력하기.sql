SELECT ORDER_ID, PRODUCT_ID, DATE_FORMAT(OUT_DATE,'%Y-%m-%d') as OUT_DATE,if(OUT_DATE is null ,'출고미정',if(OUT_DATE<'2022-05-02','출고완료','출고대기')) as 출고여부
from FOOD_ORDER  order by  ORDER_ID asc
