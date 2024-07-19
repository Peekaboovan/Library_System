#ifndef __BOOK_H__
#define __BOOK_H__

typedef struct bookmode{	//�鼮��Ϣ
	char name[50];	//�鼮��
	char id[8];	//����	
	char author[50];	//����
	float price;	//�۸�
	int remainder;	//���
} Book;

typedef struct node {	//�����Ϣ
	Book book;
	struct node* next;
} Node;

#endif