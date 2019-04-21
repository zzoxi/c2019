#include"stock.h"
void Read_file(void)
{
	m=0;
	FILE *fp;
	if((fp=fopen("data.txt","rb"))==NULL)
	{
		printf("can not open file\n");
		exit(0);
	}
	while(!feof(fp))
	{
		if(fread(&all[m+1],sizeof(goods),1,fp)==1)
		{
			m++;
		}
	}
	fclose(fp);
}
void Save_file(void)
{
	FILE *fp;
	int i;
	if((fp=fopen("data.txt","wb"))==NULL)
	{
		printf("can not open file\n");
		exit(0);
	}
	for(i=1;i<=m;i++)
	{
		if(fwrite(&all[i],sizeof(goods),1,fp)!=1)
		{
			printf("file write error\n");
		}
	}
	printf("saved\n");
	fclose(fp);
}
