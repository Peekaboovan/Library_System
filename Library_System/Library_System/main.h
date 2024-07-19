#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "Book.h"
#include "Admin.h"

void Mainmenu(Node* head);	//选择身份或退出
void Usermenu(Node* head);	//浏览/查询/借阅/归还/购买/返回/退出
void login(Node* head);		//读取管理员信息，读取成功进行登陆检验
void Adminmenu(Admin* adm, Node* head);		//显示/增删改查/排序/返回/退出
void inputBook(Node* head);		//录入图书信息并持久化
void printBook(Node* head);		//显示全部图书信息
void findBook(Node* head);		//按名称或编码查找
void saveBook(Node* head);		//书籍信息持久化入info文件
void loadBook(Node* head);		//从文件中读取书籍信息
void modifyBook(Node* head);	//重新录入目标书籍信息
void delBook(Node* head);		//按名称/编码删除对应书籍信息
void sortBook(Node* head);		//图书信息排序
void createAdmin();		//创建管理员信息并存入文件
int loadAdmin(Admin* adm);		//从文件中读取管理员信息
void modifyRemainder(Node* head, char choose);		//修改对应书籍库存量

#endif