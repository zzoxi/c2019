#include"stock.h"
void Stock_out(void)
{
	int i,j;
	int x=1;
	char judge;
	Display_list();
	while(1)
	{
		i=1;
		printf("��������������:");
		correct=scanf("%s",&out[x].name);
		if(correct!=1)
		{
			printf("��������");
			fflush(stdin);
			continue;
		}
		getchar();
		printf("������������:");
		correct=scanf("%d",&out[x].quantity);
		if(correct!=1)
		{
			printf("��������");
			fflush(stdin);
			continue;
		} 
		getchar();
		for(i=1;i<=m;i++)
		{
			if(strcmp(out[x].name,all[i].name)==0)
			{
				if(all[i].quantity<out[x].quantity)
				{
					printf("���ﲻ�� %d. name:%-10squantity:%d\n",i,all[i].name,all[i].quantity);	
				}
				else if(all[i].quantity==out[x].quantity)//ɾ����һ�������¼ 
				{
					for(j=i;j<m;j++)
					{
						all[j]=all[j+1];
					}
					m--;
					i--;
				}
				else
				{
					all[i].quantity=all[i].quantity-out[x].quantity;
				}
				break;
			}
		}
		if(i>m)
		{
			printf("û�д��ֻ���\n");
		}
		printf("����y��Y����\n");
		judge=getch();
		if((judge=='Y')||(judge=='y'))
		{
			x++;
			continue;
		}
		else
		{
			Save_file();
		} 
		break;		
	}

}
