#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* Create(int n);
void Print(struct Node* Head);
struct Node* Delete(struct Node* Head);
struct Node* Insert(struct Node* Head);
struct Node* Reverse(struct Node* Head);
int Find (struct Node* Head,int x);
extern int count;//链表节点数 
extern int usecount;//使用查找函数的次数 

#endif
