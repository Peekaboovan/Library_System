#include "main.h"

void Usermenu(Node* head)
{
	char judge = 0, choose = 0;

	while (1) {
		system("CLS");
		printf("**************************************************\n");
		printf("\t\t尊敬的客户，欢迎您!\n");
		printf("\t       请选择您要进行的操作:\n");
		printf("\t\t1.浏览\n");
		printf("\t\t2.查询书籍信息\n");
		printf("\t\t3.借阅书籍\n");
		printf("\t\t4.归还书籍\n");
		printf("\t\t5.购买书籍\n");
		printf("\t\t6.返回上一界面\n");
		printf("\t\t7.退出系统\n");
		printf("**************************************************\n");
		printf("请输入(1/2/3/4/5/6/7):\n");
		judge = _getch();
		switch (judge) {
		case '1':	//打印全部书籍信息
			printBook(head);
			break;
		case '2':	//分类查询
			findBook(head);
			break;
		case '3':	//借阅书籍
			choose = '1';
			modifyRemainder(head, choose);
			break;
		case '4':	//归还书籍
			choose = '2';
			modifyRemainder(head, choose);
			break;
		case '5':	//购买书籍
			choose = '3';
			modifyRemainder(head, choose);
			break;
		case '6':	//返回首界面
			return;
		case '7':	//退出系统
			printf("您已成功退出\n");
			exit(0);
		default:
			printf("输入错误，请重试\n");
			break;
		}
		system("PAUSE");
	}
}