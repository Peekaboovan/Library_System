#include "main.h"

void Mainmenu(Node* head)
{
	char judge = 0;

	system("COLOR 7D");
	while (1) {
		system("CLS");	//清屏后输出
		printf("**************************************************\n");
		printf("\t  欢迎使用图书信息管理系统\n");
		printf("       请选择您的身份(1.客户/2.管理员)\n");
		printf("**************************************************\n");
		printf("请输入( 1 / 2 / 3(退出系统) ):\n");
		judge = _getch();
		switch (judge) {
		case '1':		//转至客户选择界面
			Usermenu(head);
			break;
		case '2':		//转至管理员登陆界面
			login(head);
			break;
		case '3':	//退出系统
			printf("您已成功退出\n");
			exit(0);
		default:	//处理错误输入
			printf("输入错误，请重试\n");
			system("PAUSE");
			break;
		}
	}
}