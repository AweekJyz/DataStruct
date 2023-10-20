#include "BSTree.h"
#include <iostream>

BSTree SearchBSTree(BSTree T, int no)
{//return address if finded it, otherwise return NULL
	if ((!T) || no == T->data.no)
		return T;							//Search successly
	else if (no < T->data.no)
		return SearchBSTree(T->lchild, no);	//continue search in lchild
	else
		return SearchBSTree(T->rchild, no);	//continue search in rchild
}

void InsertBSTree(BSTree& T, ElemType e)
{
	if (!T)
	{
		BSTree S = new BSTNode;
		S->data = e;
		S->lchild = S->rchild = NULL;
		T = S;
	}
	else if (e.no < T->data.no)
		InsertBSTree(T->lchild, e);		//insert into lchild
	else if (e.no > T->data.no)
		InsertBSTree(T->rchild, e);		//insert into rchild
	else
		std::cout << "The elsment has been exist. ";
}

void CreatBSTree(BSTree& T)
{
	T = NULL;
	ElemType e;
	std::cin >> e;
	while (e.no != ENDFLAG)
	{
		InsertBSTree(T, e);
		std::cin >> e;
	}
}

void DeleteBST(BSTree& T, int no)
{
	BSTNode* p = T; BSTree f = NULL;
	/*-------search keyword knote who equite *p-------*/
	while (p)
	{
		if (p->data.no == no)			//finded the keyword
			break;
		f = p;							//f before p or f fellow p
		if (p->data.no > no)
			p = p->lchild;
		else
			p = p->rchild;
	}
	if (!p)	return;						//Can't find it
	/*---------full subtree, enpty lchild, enpty rchild, leaf---------*/
	BSTree q, s;
	if ((p->lchild) && (p->rchild))
	{
		q = p;
		s = p->lchild;
		while (s->rchild)
		{
			q = s;
			s = s->rchild;
		}
		p->data = s->data;
		if (q != p)
			q->rchild = s->lchild;
		else
			q->lchild = s->lchild;
		delete s;
		return;
	}
	else if (!p->rchild)
	{
		q = p;
		p = p->lchild;
	}
	else if (!p->lchild)
	{
		q = p;
		p = p->rchild;
	}
	/*--------link *p to its parents, *f---------*/
	if (!f)
		T = p;
	else if (q == f->lchild)
		f->lchild = p;
	else
		f->rchild = p;
	delete q;
}




