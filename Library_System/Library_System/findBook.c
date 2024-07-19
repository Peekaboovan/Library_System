#include "main.h"

void findBook(Node* head)
{
	Node* nail = head->next;
	char t = 0, temp[50] = { 0 }, choose = 0;

	if (nail == NULL) {
		printf("无书籍信息\n");
		return;
	}
	printf("您想要(1.按书名/2.按编码)查找:\n");
	choose = _getch();

	nail = head->next;

	switch (choose) {
	case '1':		//按书名查找
		printf("请输入书名:\n");
		scanf_s("%s", temp, 50);
		while (nail) {
			if (strcmp(nail->book.name, temp) == 0) {
				printf("******************************\n");
				printf("编码：%s\n书名：%s\n作者：%s\n价格：%.2f\n库存：%d\n", nail->book.id, nail->book.name, nail->book.author, nail->book.price, nail->book.remainder);
				printf("******************************\n");
				return;
			}
			nail = nail->next;
		}
		printf("未找到对应书籍信息:\n");
		break;
	case '2':		//按编码查找
		printf("请输入书籍编码:\n");
		scanf_s("%s", temp, 50);
		while (nail) {
			if (strcmp(nail->book.id, temp) == 0) {
				printf("******************************\n");
				printf("编码：%s\n书名：%s\n作者：%s\n价格：%.2f\n库存：%d\n", nail->book.id, nail->book.name, nail->book.author, nail->book.price, nail->book.remainder);
				printf("******************************\n");
				return;
			}
			nail = nail->next;
		}
		printf("未找到对应书籍信息:\n");
		break;
	default:
		printf("输入错误\n");
			return;
	}
}