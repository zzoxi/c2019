#include"linkedlist.h"
struct Node* Reverse(struct Node* Head)
{
	struct Node* temp1,*temp2,*temp3;
	temp1=Head;
	temp2=temp1->next;
	temp1->next=NULL;
	if(temp2!=NULL)
	{
		temp3=temp2->next;
		if (temp3!=NULL)
		{
			while(1)
			{
				temp2->next=temp1;
				temp1=temp3->next;
				if(temp1!=NULL)
				{	
					temp3->next=temp2;
					temp2=temp1->next;
					if(temp2!=NULL)
					{
						temp1->next=temp3;
						temp3=temp2->next;
						if(temp3!=NULL)	
						{
							continue;
						}
						else
						{
							Head=temp2;
							Head->next=temp1;
							return Head;
						}
					}
					else
					{
						Head=temp1;
						Head->next=temp3;
						return Head;
					}
				}
				else
				{
					Head=temp3;
					Head->next=temp2;
					return Head;
				}
			}
		}
		else
		{
			Head=temp2;
			Head->next=temp1;
			return Head;
		}
	}
	else 
	{
		Head=temp1;
		return Head;
	}
}
int Find(struct Node* Head,int x)
{
	struct Node* temp=Head;
	usecount++;
	int i;
	int n=0;
	for(i=1;i<=count;i++)
	{
		if(temp->data==x)
		{
			n++;
			if(n==usecount)//找到的第n个查找值等于函数调用次数 
			{
				return i;
			}
		}
		temp=temp->next;
	}
	return -1;//循环结束未找到 
}
