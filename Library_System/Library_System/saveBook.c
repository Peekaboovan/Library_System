#include "main.h"

void saveBook(Node* head)
{
	FILE* pfile = fopen("./book.info", "w");	//���ļ�
	if (pfile == NULL) {						//�ж��ļ��Ƿ�ɹ���
		printf("���ļ�ʧ��\n");
		return;
	}
	Node* nail;
	for (nail = head->next; nail; nail = nail->next) {		//д���ļ�
		if (fwrite(&nail->book, sizeof(Book), 1, pfile) != 1) {
			printf("����%s %s����\n", nail->book.id, nail->book.name);
		}
	}
	fclose(pfile);	//�ر��ļ�
	pfile = NULL;	//�������Ұָ��
}