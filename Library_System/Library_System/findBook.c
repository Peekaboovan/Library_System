#include "main.h"

void findBook(Node* head)
{
	Node* nail = head->next;
	char t = 0, temp[50] = { 0 }, choose = 0;

	if (nail == NULL) {
		printf("���鼮��Ϣ\n");
		return;
	}
	printf("����Ҫ(1.������/2.������)����:\n");
	choose = _getch();

	nail = head->next;

	switch (choose) {
	case '1':		//����������
		printf("����������:\n");
		scanf_s("%s", temp, 50);
		while (nail) {
			if (strcmp(nail->book.name, temp) == 0) {
				printf("******************************\n");
				printf("���룺%s\n������%s\n���ߣ�%s\n�۸�%.2f\n��棺%d\n", nail->book.id, nail->book.name, nail->book.author, nail->book.price, nail->book.remainder);
				printf("******************************\n");
				return;
			}
			nail = nail->next;
		}
		printf("δ�ҵ���Ӧ�鼮��Ϣ:\n");
		break;
	case '2':		//���������
		printf("�������鼮����:\n");
		scanf_s("%s", temp, 50);
		while (nail) {
			if (strcmp(nail->book.id, temp) == 0) {
				printf("******************************\n");
				printf("���룺%s\n������%s\n���ߣ�%s\n�۸�%.2f\n��棺%d\n", nail->book.id, nail->book.name, nail->book.author, nail->book.price, nail->book.remainder);
				printf("******************************\n");
				return;
			}
			nail = nail->next;
		}
		printf("δ�ҵ���Ӧ�鼮��Ϣ:\n");
		break;
	default:
		printf("�������\n");
			return;
	}
}