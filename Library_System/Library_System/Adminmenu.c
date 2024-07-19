#include "main.h"

void Adminmenu(Admin* adm, Node* head)
{
	char judge = 0, choose = 0;

	while (1) {
		system("CLS");
		printf("**************************************************\n");
		printf("\t     欢迎您，管理员%s\n", adm->name);
		printf("\t\t请选择您的操作:\n");
		printf("\t\t1.查看库存\n");
		printf("\t\t2.查询书籍信息\n");
		printf("\t\t3.录入书籍信息\n");
		printf("\t\t4.删除书籍信息\n");
		printf("\t\t5.修改书籍信息\n");
		printf("\t\t6.整理书籍信息\n");
		printf("\t\t7.返回主菜单\n");
		printf("\t\t8.退出系统\n");
		printf("**************************************************\n");
		judge = _getch();
		switch (judge) {
		case '1':	//打印书籍清单
			printBook(head);
			break;
		case '2':	//搜索书籍
			findBook(head);
			break;
		case '3':	//手动录入书籍信息
			inputBook(head);
			break;
		case '4':	//删除书籍信息
			delBook(head);
			break;
		case '5':	//修改书籍信息
			modifyBook(head);
			break;
		case '6':	//整理书籍信息
			sortBook(head);
			break;
		case '7':	//返回首界面
			return;
		case '8':	//退出系统
			printf("您已成功退出\n");
			exit(0);
			break;
		default:
			printf("您的输入有误，请重试\n");
			break;
		}
		system("PAUSE");
	}
}