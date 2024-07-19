//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//
//#include "Book.h"
//#include "Admin.h"
//
//typedef struct bookmode {	//书籍信息
//	char name[50];	//书籍名
//	int id;	//编码	
//	char author[50];	//作者
//	float price;	//价格
//	int remainder;	//库存
//} Book;
//
//typedef struct node {	//结点信息
//	Book book;
//	struct node* next;
//} Node;

//typedef struct Administrator {
//	char name[20];	//姓名
//	int account;	//账号
//	int secret;	//密码
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

int main()	//创建头节点，读取图书信息，打开主菜单
{
	//创建头节点
	Node* head = (Node*)malloc(sizeof(Node));
	head->next = NULL;

	loadBook(head);
	Mainmenu(head);

	return 0;
}