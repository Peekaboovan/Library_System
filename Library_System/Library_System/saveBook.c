#include "main.h"

void saveBook(Node* head)
{
	FILE* pfile = fopen("./book.info", "w");	//打开文件
	if (pfile == NULL) {						//判断文件是否成功打开
		printf("打开文件失败\n");
		return;
	}
	Node* nail;
	for (nail = head->next; nail; nail = nail->next) {		//写入文件
		if (fwrite(&nail->book, sizeof(Book), 1, pfile) != 1) {
			printf("保存%s %s出错\n", nail->book.id, nail->book.name);
		}
	}
	fclose(pfile);	//关闭文件
	pfile = NULL;	//避免产生野指针
}