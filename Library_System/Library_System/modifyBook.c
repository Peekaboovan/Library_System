#include "main.h"

void modifyBook(Node* head)
{
	char temp[50] = { 0 };
	Node* nail = NULL;
	Book t;
	Book* ptemp = NULL;

	if (head->next == NULL) {
		printf("无书籍信息\n");
		return;
	}
	printf("请输入要修改的书籍名称:\n");
	scanf_s("%s", &temp, 50);
	for (nail = head->next; nail; nail = nail->next) {
		if (strcmp(nail->book.name, temp) == 0) {	//通过书籍名称判断
			ptemp = &nail->book;
			printf("对应书籍信息如下，请修改:\n");
			printf("******************************\n");
			printf("编码：%s\n书名：%s\n作者：%s\n价格：%.2f\n库存：%d\n", nail->book.id, nail->book.name, nail->book.author, nail->book.price, nail->book.remainder);
			printf("******************************\n");
			printf("请依次输入书籍的编码、名称、作者、价格与库存(用空格隔开):\n");
			scanf_s("%s", &t.id, 8);
			scanf_s("%s", t.name, 50);
			scanf_s("%s", t.author, 50);
			scanf_s("%f %d", &t.price, &t.remainder);

			Node* p = head;

			while (p) {
				if (strcmp(t.id, p->book.id) == 0 && p != ptemp) {
					printf("******************************\n");
					printf("该编码已存在对应书籍,无法修改\n");
					printf("******************************\n");
					printf("编码：%s\n书名：%s\n作者：%s\n价格：%.2f\n库存：%d\n", p->book.id, p->book.name, p->book.author, p->book.price, p->book.remainder);
					printf("******************************\n");
					return;
				}
				else if (strcmp(t.name, p->book.name) == 0 && p != ptemp) {
					printf("******************************\n");
					printf("存在同名书籍，无法修改\n");
					printf("******************************\n");
					printf("编码：%s\n书名：%s\n作者：%s\n价格：%.2f\n库存：%d\n", p->book.id, p->book.name, p->book.author, p->book.price, p->book.remainder);
					printf("******************************\n");
					return;
				}
				p = p->next;
			}
			if (t.price <= 0) {
				printf("价格输入非法\n");
				getchar();
				return;
			}
			else if (t.remainder < 0) {
				printf("库存输入非法\n");
				getchar();
				return;
			}
			nail->book = t;
			printf("修改完成\n");
			saveBook(head);
			return;
		}
	}
	printf("未发现对应书籍信息\n");
}