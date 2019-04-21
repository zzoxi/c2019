#include"stock.h"
void Display_list(void)
{
	FILE *fp;
	if((fp=fopen("data.txt","rb+"))==NULL)
	{
		printf("can not open\n");
		exit(0);
	}
	int i=1;
	if(m==0)
	{
		printf("ÎÞ»õÎïno record\n");
	}
	while((!feof(fp))&&i<=m)
	{
		printf("%d. name:%-10squantity:%d\n",i,all[i].name,all[i].quantity);
		i++;
	}
} 
