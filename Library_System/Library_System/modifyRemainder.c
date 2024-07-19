#include "main.h"

void modifyRemainder(Node* head, char choose)
{
	Node* nail = NULL;
	char temp[50] = { 0 };

	if (head->next == NULL) {
		printf("无书籍信息\n");
		return;
	}
	printf("请输入书籍名称\n");
	scanf_s("%s", &temp, 50);
	for (nail = head->next; nail; nail = nail->next) {
		if (strcmp(nail->book.name, temp) == 0) {
			switch (choose) {
			case '1':
				if (nail->book.remainder > 0) {
					nail->book.remainder--;
					printf("借阅成功\n");
					saveBook(head);
					return;
				}
				else {
					printf("该书籍已无库存\n");
					return;
				}
			case '2':
				nail->book.remainder++;
				printf("归还成功\n");
				saveBook(head);
				return;
			case '3':
				if (nail->book.remainder > 0) {
					nail->book.remainder--;
					printf("购买成功\n");
					saveBook(head);
					return;
				}
				else {
					printf("该书籍已无库存\n");
					return;
				}
			}
		}
	}
	printf("未找到对应书籍\n");
}