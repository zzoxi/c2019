#include"linkedlist.h"
int count;//����ڵ��� 
int usecount;//ʹ�ò��Һ����Ĵ��� 
int main(void)
{
	count=0;
	int n,number1,number2;
	printf("�����ʼ�ڵ����\n");
	scanf("%d",&n);
	struct Node* Head=Create(n);
	Print(Head);
	Head=Delete(Head);
	Print(Head);
	printf("���ж���%d��\n",count);
	Head=Insert(Head);
	Print(Head);
	printf("���ж���%d��\n",count);
	Head=Reverse(Head);
	Print(Head);
	number1=Find(Head,5);
	number2=Find(Head,5);
	printf("��һ��ֵΪ5�����%d �ڶ���ֵΪ������%d����û�ҵ���ʾ-1��\n",number1,number2);
	return 0;
}
struct Node* Create(int n)
{
	struct Node* Head,*End;
	while(1)
	{
		if(n==0) break;
		struct Node* New=(struct Node*)malloc(sizeof(struct Node));
		printf("�����%d�ڵ���ֵ",count+1);
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
	printf("������Ҫɾ���Ľڵ��ţ���1����\n"); 
	scanf("%d",&number);
	if(count==1)
	{
		printf("ֻ��һ���ڵ�,����ɾ��");
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
		temp->next=tempnext->next;//tempnextɾ�� 
		free(tempnext);	
	}
	count--;
	return Head;
}//ɾ����number���ڵ� 
struct Node* Insert(struct Node* Head)
{
	int i;
	int number;
	struct Node* temp=Head;
	printf("������Ҫ����һ���ڵ�����ڵ㣬��1����(����0�������һ��ͷ�ڵ�)\n"); 
	scanf("%d",&number);
	if(number==0)//��������ǰ�����ڵ�
	{
		struct Node* add=(struct Node*)malloc(sizeof(struct Node));
		printf("�������ڵ��ֵ\n");
		scanf("%d",&add->data);
		add->next=Head;
		Head=add;
		count++;
		return Head;
	} 
	for(i=1;i<number;i++)//�ڵ�number������ 
	{
		temp=temp->next;
	}
	struct Node* add=(struct Node*)malloc(sizeof(struct Node));
	printf("�������ڵ��ֵ\n");
	scanf("%d",&add->data);
	add->next=temp->next;
	temp->next=add;
	count++;
	return Head;	
}



