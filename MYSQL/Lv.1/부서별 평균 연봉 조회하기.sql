SELECT a.DEPT_ID, a.DEPT_NAME_EN, ROUND(avg(b.SAL),0) as AVG_SAL from HR_DEPARTMENT  as a, HR_EMPLOYEES  as b where a.DEPT_ID = b.DEPT_ID group by DEPT_ID order by AVG_SAL DESC
