#pragma once
#ifndef _BSTREE_H_
#define _BSTREE_H_
#define ENDFLAG 10
typedef struct elemtype
{
	int no;			// KeyType key;
	float score;	// InfoType otherinfo;
}ElemType;
typedef struct bstnode
{
	ElemType data;
	struct bstnode* lchild, * rchild;
}BSTNode, *BSTree;

#endif

//Search BSTree
BSTree SearchBSTree(BSTree T, int no);
//Insert BSTree
void InsertBSTree(BSTree& T, ElemType e);
//Creat BSTree
void CreatBSTree(BSTree& T);
//Delete BSTree
void DeleteBST(BSTree& T, int no);
