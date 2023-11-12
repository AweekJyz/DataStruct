#pragma once
#ifndef __SORT_H__
#define __SORT_H__

#define MAXSIZE 20		//The maxsize of the list
typedef int KeyType;
typedef char* InfoType;
typedef struct redtype {
	KeyType key;		//keyword
	InfoType otherinfo;	//otherinfo
}RedType;				//type of records
typedef struct sqlist {
	RedType r[MAXSIZE + 1];//r[0] idle or Sentinel unit 
	int length;			//lenght of sequences
}SqList;				//Type of sqlist

#endif

/****************************/
void InsertSort(SqList& L);
/****************************/
