//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//
//#include "Book.h"
//#include "Admin.h"
//
//typedef struct bookmode {	//�鼮��Ϣ
//	char name[50];	//�鼮��
//	int id;	//����	
//	char author[50];	//����
//	float price;	//�۸�
//	int remainder;	//���
//} Book;
//
//typedef struct node {	//�����Ϣ
//	Book book;
//	struct node* next;
//} Node;

//typedef struct Administrator {
//	char name[20];	//����
//	int account;	//�˺�
//	int secret;	//����
//} Admin;
//
//void Mainmenu(Node* head);
//void Usermenu(Node* head);
//void login(Node* head);
//void Adminmenu(Admin* adm, Node* head);
//void inputBook(Node* head);
//void printBook(Node* head);
//void findBook(Node* head);
//void saveBook(Node* head);
//void loadBook(Node* head);
//void modifyBook(Node* head);
//void delBook(Node* head);
//void sortBook(Node* head);
//void createAdmin();
//int loadAdmin(Admin* adm);
//void modifyRemainder(Node* head, char choose);

#include "main.h"

int main()	//����ͷ�ڵ㣬��ȡͼ����Ϣ�������˵�
{
	//����ͷ�ڵ�
	Node* head = (Node*)malloc(sizeof(Node));
	head->next = NULL;

	loadBook(head);
	Mainmenu(head);

	return 0;
}