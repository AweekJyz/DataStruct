#pragma once

#define MAXSIZE 100


//Polynomial
struct polynomial
{
	float coef;	//系数
	int expn;	//指数
};

//Library
struct book
{
	char no[20];	//ISBN
	char name[50];	
	float price;
};


typedef struct polynomail Item;
typedef struct sqlist
{
	Item *item;
	int length;
}SqList;

//后置条件: 构造一个空的线性表L
void InitList(SqList* plist);

