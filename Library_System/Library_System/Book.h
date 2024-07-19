#ifndef __BOOK_H__
#define __BOOK_H__

typedef struct bookmode{	//书籍信息
	char name[50];	//书籍名
	char id[8];	//编码	
	char author[50];	//作者
	float price;	//价格
	int remainder;	//库存
} Book;

typedef struct node {	//结点信息
	Book book;
	struct node* next;
} Node;

#endif