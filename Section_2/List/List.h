#pragma once

#define MAXSIZE 100


//Polynomial
struct polynomial
{
	float coef;	//ϵ��
	int expn;	//ָ��
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

//��������: ����һ���յ����Ա�L
void InitList(SqList* plist);

