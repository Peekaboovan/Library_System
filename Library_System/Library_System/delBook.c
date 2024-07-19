#include "main.h"

void delBook(Node* head)
{
	Node* nail = NULL;
	char temp[50] = { 0 };

	if (head->next == NULL) {
		printf("无书籍信息\n");
		return;
	}
	printf("请输入需要删除的书籍名称:\n");
	scanf_s("%s", &temp, 50);
	for (nail = head; nail->next; nail = nail->next) {
		if (strcmp(nail->next->book.name, temp) == 0) {		//通过书名判断
			Node* p = nail->next;
			nail->next = nail->next->next;
			free(p);
			p = NULL;
			saveBook(head);
			printf("删除成功\n");
			return;
		}
	}
	printf("未发现对应书籍信息\n");
}