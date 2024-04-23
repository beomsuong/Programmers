SELECT a.CATEGORY , sum(b.SALES) as TOTAL_SALES from BOOK as a, BOOK_SALES as b where b.SALES_DATE like '2022-01%' and a.BOOK_ID=b.BOOK_ID group by a.CATEGORY order by a.CATEGORY
