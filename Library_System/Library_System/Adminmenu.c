#include "main.h"

void Adminmenu(Admin* adm, Node* head)
{
	char judge = 0, choose = 0;

	while (1) {
		system("CLS");
		printf("**************************************************\n");
		printf("\t     ��ӭ��������Ա%s\n", adm->name);
		printf("\t\t��ѡ�����Ĳ���:\n");
		printf("\t\t1.�鿴���\n");
		printf("\t\t2.��ѯ�鼮��Ϣ\n");
		printf("\t\t3.¼���鼮��Ϣ\n");
		printf("\t\t4.ɾ���鼮��Ϣ\n");
		printf("\t\t5.�޸��鼮��Ϣ\n");
		printf("\t\t6.�����鼮��Ϣ\n");
		printf("\t\t7.�������˵�\n");
		printf("\t\t8.�˳�ϵͳ\n");
		printf("**************************************************\n");
		judge = _getch();
		switch (judge) {
		case '1':	//��ӡ�鼮�嵥
			printBook(head);
			break;
		case '2':	//�����鼮
			findBook(head);
			break;
		case '3':	//�ֶ�¼���鼮��Ϣ
			inputBook(head);
			break;
		case '4':	//ɾ���鼮��Ϣ
			delBook(head);
			break;
		case '5':	//�޸��鼮��Ϣ
			modifyBook(head);
			break;
		case '6':	//�����鼮��Ϣ
			sortBook(head);
			break;
		case '7':	//�����׽���
			return;
		case '8':	//�˳�ϵͳ
			printf("���ѳɹ��˳�\n");
			exit(0);
			break;
		default:
			printf("������������������\n");
			break;
		}
		system("PAUSE");
	}
}