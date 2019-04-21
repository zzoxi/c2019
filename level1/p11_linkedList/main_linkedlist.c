#include"linkedlist.h"
int count;//链表节点数 
int usecount;//使用查找函数的次数 
int main(void)
{
	count=0;
	int n,number1,number2;
	printf("输入初始节点个数\n");
	scanf("%d",&n);
	struct Node* Head=Create(n);
	Print(Head);
	Head=Delete(Head);
	Print(Head);
	printf("共有多少%d个\n",count);
	Head=Insert(Head);
	Print(Head);
	printf("共有多少%d个\n",count);
	Head=Reverse(Head);
	Print(Head);
	number1=Find(Head,5);
	number2=Find(Head,5);
	printf("第一个值为5的序号%d 第二个值为五的序号%d（若没找到显示-1）\n",number1,number2);
	return 0;
}
struct Node* Create(int n)
{
	struct Node* Head,*End;
	while(1)
	{
		if(n==0) break;
		struct Node* New=(struct Node*)malloc(sizeof(struct Node));
		printf("输入第%d节点数值",count+1);
		scanf("%d",&New->data);
		if(count==0)
		{
			Head=New;
			End=New;
		}
		New->next=NULL;
		End->next=New;
		End=New;
		n--;
		count++;
	}
	return Head;	
}
void Print(struct Node* Head)
{
	struct Node* temp=Head;
	printf("%d ",temp->data);
	while(temp->next!=NULL)
	{
		temp=temp->next;
		printf("%d ",temp->data);
	}
}
struct Node* Delete(struct Node* Head)
{
	int i;
	int number;
	printf("输入想要删除的节点编号，从1计数\n"); 
	scanf("%d",&number);
	if(count==1)
	{
		printf("只有一个节点,链表被删除");
		free(Head);
		count--;
		return NULL;
	}
	else if(number==1)
	{
		struct Node* temp=Head;
		Head=Head->next;
		free(temp);
	}
	else
	{
		struct Node* temp;
		struct Node* tempnext=Head;
		for(i=1;i<number;i++)
		{
			temp=tempnext;
			tempnext=temp->next;
		}
		temp->next=tempnext->next;//tempnext删除 
		free(tempnext);	
	}
	count--;
	return Head;
}//删除第number个节点 
struct Node* Insert(struct Node* Head)
{
	int i;
	int number;
	struct Node* temp=Head;
	printf("输入想要在哪一个节点后插入节点，从1计数(输入0代表插入一个头节点)\n"); 
	scanf("%d",&number);
	if(number==0)//在链表最前面插入节点
	{
		struct Node* add=(struct Node*)malloc(sizeof(struct Node));
		printf("输入插入节点的值\n");
		scanf("%d",&add->data);
		add->next=Head;
		Head=add;
		count++;
		return Head;
	} 
	for(i=1;i<number;i++)//在第number项后插入 
	{
		temp=temp->next;
	}
	struct Node* add=(struct Node*)malloc(sizeof(struct Node));
	printf("输入插入节点的值\n");
	scanf("%d",&add->data);
	add->next=temp->next;
	temp->next=add;
	count++;
	return Head;	
}



