#include "main.h"

void delBook(Node* head)
{
	Node* nail = NULL;
	char temp[50] = { 0 };

	if (head->next == NULL) {
		printf("���鼮��Ϣ\n");
		return;
	}
	printf("��������Ҫɾ�����鼮����:\n");
	scanf_s("%s", &temp, 50);
	for (nail = head; nail->next; nail = nail->next) {
		if (strcmp(nail->next->book.name, temp) == 0) {		//ͨ�������ж�
			Node* p = nail->next;
			nail->next = nail->next->next;
			free(p);
			p = NULL;
			saveBook(head);
			printf("ɾ���ɹ�\n");
			return;
		}
	}
	printf("δ���ֶ�Ӧ�鼮��Ϣ\n");
}