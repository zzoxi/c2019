#include"stock.h"
void menu()
{
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t|------------------库存菜单-----------------|\n");
	printf("\t\t|                                           |\n");
	printf("\t\t|       0.Exit            退出程序          |\n");
	printf("\t\t|       1.Display list    显示存货列表      |\n");
	printf("\t\t|       2.Stock in        入库              |\n");
	printf("\t\t|       3.Stock out       出库              |\n");
	printf("\t\t|       4.Clean screen    清屏显示菜单      |\n");
	printf("\t\t|                                           |\n");
	printf("\t\t|-------------------------------------------|\n\n");
	int choose;
	while(1)
	{
		printf("\t\t\tchoose(0~4)：");
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
				printf("错误输入请重新输入\n");
				continue;
		}
	}
}
void Exit(void)
{
	Save_file();
	exit(0);
}
