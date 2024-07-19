#include "main.h"

void inputBook(Node* head)
{
	Node* nail = (Node*)malloc(sizeof(Node));

	nail->next = NULL;
	printf("请依次输入书籍的编码、名称、作者、价格与库存(用空格隔开):\n");
	scanf_s("%s", &nail->book.id, 8);
	scanf_s("%s", nail->book.name, 50);
	scanf_s("%s", nail->book.author, 50);
	scanf_s("%f %d", &nail->book.price, &nail->book.remainder);
	if (nail->book.price <= 0) {
		printf("价格输入非法\n");
		getchar();
		return;
	}
	else if (nail->book.remainder < 0) {
		printf("库存输入非法\n");
		getchar();
		return;
	}
	Node* p = head;
	while (p->next) {
		if (strcmp(nail->book.id, p->next->book.id) == 0) {
			printf("该编码已存在对应书籍\n");
			printf("******************************\n");
			printf("编码：%s\n书名：%s\n作者：%s\n价格：%.2f\n库存：%d\n", p->next->book.id, p->next->book.name, p->next->book.author, p->next->book.price, p->next->book.remainder);
			printf("******************************\n");
			return;
		}
		else if (strcmp(nail->book.name, p->next->book.name) == 0) {
			printf("存在同名书籍，无法录入\n");
			printf("******************************\n");
			printf("编码：%s\n书名：%s\n作者：%s\n价格：%.2f\n库存：%d\n", p->next->book.id, p->next->book.name, p->next->book.author, p->next->book.price, p->next->book.remainder);
			printf("******************************\n");
			return;
		}
		p = p->next;
	}
	p->next = nail;		//尾插法插入书籍信息
	saveBook(head);
	printf("书籍信息录入成功\n");
}