#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "Book.h"
#include "Admin.h"

void Mainmenu(Node* head);	//ѡ����ݻ��˳�
void Usermenu(Node* head);	//���/��ѯ/����/�黹/����/����/�˳�
void login(Node* head);		//��ȡ����Ա��Ϣ����ȡ�ɹ����е�½����
void Adminmenu(Admin* adm, Node* head);		//��ʾ/��ɾ�Ĳ�/����/����/�˳�
void inputBook(Node* head);		//¼��ͼ����Ϣ���־û�
void printBook(Node* head);		//��ʾȫ��ͼ����Ϣ
void findBook(Node* head);		//�����ƻ�������
void saveBook(Node* head);		//�鼮��Ϣ�־û���info�ļ�
void loadBook(Node* head);		//���ļ��ж�ȡ�鼮��Ϣ
void modifyBook(Node* head);	//����¼��Ŀ���鼮��Ϣ
void delBook(Node* head);		//������/����ɾ����Ӧ�鼮��Ϣ
void sortBook(Node* head);		//ͼ����Ϣ����
void createAdmin();		//��������Ա��Ϣ�������ļ�
int loadAdmin(Admin* adm);		//���ļ��ж�ȡ����Ա��Ϣ
void modifyRemainder(Node* head, char choose);		//�޸Ķ�Ӧ�鼮�����

#endif