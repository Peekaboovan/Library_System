#include "main.h"

void sortBook(Node* head)
{
	Node* nail = NULL;
	Node* p = NULL;
	char temp[8] = { 0 };

	if (head->next == NULL) {
		printf("���鼮��Ϣ\n");
		return;
	}
	for (nail = head->next; nail; nail = nail->next) {			//ð���㷨����
		for (p = nail; p; p = p->next) {
			if (strcmp(nail->book.id, p->book.id) > 0) {		//�Ƚϱ����С�ж�
				Book change = nail->book;
				nail->book = p->book;
				p->book = change;
			}
		}
	}
	saveBook(head);
	printBook(head);
}