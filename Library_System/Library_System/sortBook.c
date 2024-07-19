#include "main.h"

void sortBook(Node* head)
{
	Node* nail = NULL;
	Node* p = NULL;
	char temp[8] = { 0 };

	if (head->next == NULL) {
		printf("无书籍信息\n");
		return;
	}
	for (nail = head->next; nail; nail = nail->next) {			//冒泡算法排序
		for (p = nail; p; p = p->next) {
			if (strcmp(nail->book.id, p->book.id) > 0) {		//比较编码大小判断
				Book change = nail->book;
				nail->book = p->book;
				p->book = change;
			}
		}
	}
	saveBook(head);
	printBook(head);
}