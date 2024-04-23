SELECT a.ITEM_ID, a.ITEM_NAME from ITEM_INFO as a, ITEM_TREE as b where a.ITEM_ID=b.ITEM_ID and b.PARENT_ITEM_ID is null order by a.ITEM_ID asc
