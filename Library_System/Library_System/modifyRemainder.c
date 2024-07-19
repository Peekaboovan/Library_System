#include "main.h"

void modifyRemainder(Node* head, char choose)
{
	Node* nail = NULL;
	char temp[50] = { 0 };

	if (head->next == NULL) {
		printf("���鼮��Ϣ\n");
		return;
	}
	printf("�������鼮����\n");
	scanf_s("%s", &temp, 50);
	for (nail = head->next; nail; nail = nail->next) {
		if (strcmp(nail->book.name, temp) == 0) {
			switch (choose) {
			case '1':
				if (nail->book.remainder > 0) {
					nail->book.remainder--;
					printf("���ĳɹ�\n");
					saveBook(head);
					return;
				}
				else {
					printf("���鼮���޿��\n");
					return;
				}
			case '2':
				nail->book.remainder++;
				printf("�黹�ɹ�\n");
				saveBook(head);
				return;
			case '3':
				if (nail->book.remainder > 0) {
					nail->book.remainder--;
					printf("����ɹ�\n");
					saveBook(head);
					return;
				}
				else {
					printf("���鼮���޿��\n");
					return;
				}
			}
		}
	}
	printf("δ�ҵ���Ӧ�鼮\n");
}