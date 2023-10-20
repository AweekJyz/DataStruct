#include "List.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void InitList(SqList* plist)
{
	plist->item = (Item*)malloc(sizeof(struct sqlist));
	
	if (!plist->item) exit(1);
	plist->length = 0;
}
