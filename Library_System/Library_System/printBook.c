#include "main.h"

void printBook(Node* head)
{
	Node* nail = head->next;

	if (nail == NULL) {
		printf("无书籍信息\n");
		return;
	}
	while (nail) {		//打印书籍列表
		printf("编码：%s\n书名：%s\n作者：%s\n价格：%.2f\n库存：%d\n", nail->book.id, nail->book.name, nail->book.author, nail->book.price, nail->book.remainder);
		printf("******************************\n");
		nail = nail->next;
	}
}