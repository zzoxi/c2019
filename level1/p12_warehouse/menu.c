#include"stock.h"
void menu()
{
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t|------------------���˵�-----------------|\n");
	printf("\t\t|                                           |\n");
	printf("\t\t|       0.Exit            �˳�����          |\n");
	printf("\t\t|       1.Display list    ��ʾ����б�      |\n");
	printf("\t\t|       2.Stock in        ���              |\n");
	printf("\t\t|       3.Stock out       ����              |\n");
	printf("\t\t|       4.Clean screen    ������ʾ�˵�      |\n");
	printf("\t\t|                                           |\n");
	printf("\t\t|-------------------------------------------|\n\n");
	int choose;
	while(1)
	{
		printf("\t\t\tchoose(0~4)��");
		scanf("%d",&choose);
		getchar();
		switch (choose)
		{
			case 0:
				Exit();
				break;
			case 1:
				Display_list();
				break;
			case 2:
				Stock_in();
				break;
			case 3:
				Stock_out();
				break;
			case 4:
				menu();
				break; 
			default:
				printf("������������������\n");
				continue;
		}
	}
}
void Exit(void)
{
	Save_file();
	exit(0);
}
