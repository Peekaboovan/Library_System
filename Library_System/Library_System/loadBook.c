#include "main.h"

void loadBook(Node* head)
{
	FILE* pfile = fopen("./book.info", "r");	//���ļ�(ֻ��)

	if (pfile == NULL) {						//�ж��ļ��Ƿ�ɹ���
		return;
	}
	Node* new = (Node*)malloc(sizeof(Node));
	new->next = NULL;
	Node* nail = head;
	while (fread(&new->book, sizeof(Book), 1, pfile) == 1) {	//��ȡ�ļ�
		nail->next = new;
		nail = new;
		new = (Node*)malloc(sizeof(Node));
		new->next = NULL;
	}
	free(new);		//���������
	fclose(pfile);	//�ر��ļ�
	pfile = NULL;	//�������Ұָ��
}