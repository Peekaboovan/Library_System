#include "main.h"

void loadBook(Node* head)
{
	FILE* pfile = fopen("./book.info", "r");	//打开文件(只读)

	if (pfile == NULL) {						//判断文件是否成功打开
		return;
	}
	Node* new = (Node*)malloc(sizeof(Node));
	new->next = NULL;
	Node* nail = head;
	while (fread(&new->book, sizeof(Book), 1, pfile) == 1) {	//读取文件
		nail->next = new;
		nail = new;
		new = (Node*)malloc(sizeof(Node));
		new->next = NULL;
	}
	free(new);		//清除多余结点
	fclose(pfile);	//关闭文件
	pfile = NULL;	//避免产生野指针
}