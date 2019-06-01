/*
 * clist.c
 *
 *  Created on: 2019年5月29日
 *      Author: chen.hua.you@163.com
 */
#include "clist.h"
#include <malloc.h>

Status initList_Sq(SqList *L){
	L->elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if(! L->elem) exit(OVERFLOW);
	L->length = 0;
	L->listSize = LIST_INIT_SIZE;
	return OK;
}
//i=0,1,2,....length-1
Status listInsert_Sq(SqList *L,int i, ElemType e){
	if(i<0||i>L->length-1){
		return ERROR;
	}
	if(L->length>=L->listSize){
		ElemType *newBase = (ElemType*)realloc(L->elem,(L->listSize+LISTINCREMENT)*sizeof(ElemType));
		L->elem = newBase;
		L->listSize += LISTINCREMENT;
	}
	for(int k=L->length;k>i;k--){
		L[k] = L[k-1];
	}
	L->elem[i] = e;
	L->length ++;
	return OK;
}

