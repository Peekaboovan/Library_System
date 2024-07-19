#include "main.h"

void inputBook(Node* head)
{
	Node* nail = (Node*)malloc(sizeof(Node));

	nail->next = NULL;
	printf("�����������鼮�ı��롢���ơ����ߡ��۸�����(�ÿո����):\n");
	scanf_s("%s", &nail->book.id, 8);
	scanf_s("%s", nail->book.name, 50);
	scanf_s("%s", nail->book.author, 50);
	scanf_s("%f %d", &nail->book.price, &nail->book.remainder);
	if (nail->book.price <= 0) {
		printf("�۸�����Ƿ�\n");
		getchar();
		return;
	}
	else if (nail->book.remainder < 0) {
		printf("�������Ƿ�\n");
		getchar();
		return;
	}
	Node* p = head;
	while (p->next) {
		if (strcmp(nail->book.id, p->next->book.id) == 0) {
			printf("�ñ����Ѵ��ڶ�Ӧ�鼮\n");
			printf("******************************\n");
			printf("���룺%s\n������%s\n���ߣ�%s\n�۸�%.2f\n��棺%d\n", p->next->book.id, p->next->book.name, p->next->book.author, p->next->book.price, p->next->book.remainder);
			printf("******************************\n");
			return;
		}
		else if (strcmp(nail->book.name, p->next->book.name) == 0) {
			printf("����ͬ���鼮���޷�¼��\n");
			printf("******************************\n");
			printf("���룺%s\n������%s\n���ߣ�%s\n�۸�%.2f\n��棺%d\n", p->next->book.id, p->next->book.name, p->next->book.author, p->next->book.price, p->next->book.remainder);
			printf("******************************\n");
			return;
		}
		p = p->next;
	}
	p->next = nail;		//β�巨�����鼮��Ϣ
	saveBook(head);
	printf("�鼮��Ϣ¼��ɹ�\n");
}