#include "main.h"

void printBook(Node* head)
{
	Node* nail = head->next;

	if (nail == NULL) {
		printf("���鼮��Ϣ\n");
		return;
	}
	while (nail) {		//��ӡ�鼮�б�
		printf("���룺%s\n������%s\n���ߣ�%s\n�۸�%.2f\n��棺%d\n", nail->book.id, nail->book.name, nail->book.author, nail->book.price, nail->book.remainder);
		printf("******************************\n");
		nail = nail->next;
	}
}