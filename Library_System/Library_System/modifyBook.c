#include "main.h"

void modifyBook(Node* head)
{
	char temp[50] = { 0 };
	Node* nail = NULL;
	Book t;
	Book* ptemp = NULL;

	if (head->next == NULL) {
		printf("���鼮��Ϣ\n");
		return;
	}
	printf("������Ҫ�޸ĵ��鼮����:\n");
	scanf_s("%s", &temp, 50);
	for (nail = head->next; nail; nail = nail->next) {
		if (strcmp(nail->book.name, temp) == 0) {	//ͨ���鼮�����ж�
			ptemp = &nail->book;
			printf("��Ӧ�鼮��Ϣ���£����޸�:\n");
			printf("******************************\n");
			printf("���룺%s\n������%s\n���ߣ�%s\n�۸�%.2f\n��棺%d\n", nail->book.id, nail->book.name, nail->book.author, nail->book.price, nail->book.remainder);
			printf("******************************\n");
			printf("�����������鼮�ı��롢���ơ����ߡ��۸�����(�ÿո����):\n");
			scanf_s("%s", &t.id, 8);
			scanf_s("%s", t.name, 50);
			scanf_s("%s", t.author, 50);
			scanf_s("%f %d", &t.price, &t.remainder);

			Node* p = head;

			while (p) {
				if (strcmp(t.id, p->book.id) == 0 && p != ptemp) {
					printf("******************************\n");
					printf("�ñ����Ѵ��ڶ�Ӧ�鼮,�޷��޸�\n");
					printf("******************************\n");
					printf("���룺%s\n������%s\n���ߣ�%s\n�۸�%.2f\n��棺%d\n", p->book.id, p->book.name, p->book.author, p->book.price, p->book.remainder);
					printf("******************************\n");
					return;
				}
				else if (strcmp(t.name, p->book.name) == 0 && p != ptemp) {
					printf("******************************\n");
					printf("����ͬ���鼮���޷��޸�\n");
					printf("******************************\n");
					printf("���룺%s\n������%s\n���ߣ�%s\n�۸�%.2f\n��棺%d\n", p->book.id, p->book.name, p->book.author, p->book.price, p->book.remainder);
					printf("******************************\n");
					return;
				}
				p = p->next;
			}
			if (t.price <= 0) {
				printf("�۸�����Ƿ�\n");
				getchar();
				return;
			}
			else if (t.remainder < 0) {
				printf("�������Ƿ�\n");
				getchar();
				return;
			}
			nail->book = t;
			printf("�޸����\n");
			saveBook(head);
			return;
		}
	}
	printf("δ���ֶ�Ӧ�鼮��Ϣ\n");
}