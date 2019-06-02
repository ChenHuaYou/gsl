/*
 * clist.h
 *
 *  Created on: 2019年5月29日
 *      Author: 陈华友
 */

#ifndef CLIST_H_
#define CLIST_H_

// -- 线性表的动态分配顺序存储结构 --//
#define LIST_INIT_SIZE (100) //线性表存储空间初始值
#define LISTINCREMENT (10) //线性表存储空间的分配增量
#define OVERFLOW (600) //初始化列表失败
#define OK 601 //初始化列表成功
#define ERROR 602 //越界错误

typedef void* ElemType;
typedef int Status;

typedef struct {
	ElemType *elem; //存储空间基地址
	int length; //当前长度
	int listSize; //当前分配的存储容量(以sizeof(ElemType)为单位)
} SqList;

Status initList_Sq(SqList *L); //初始化顺序表
Status listInsert_Sq(SqList *L, int i, ElemType e); //插入顺序表
Status listDelete_Sq(SqList *L, int i, ElemType e); //插入顺序表

#endif /* CLIST_H_ */
