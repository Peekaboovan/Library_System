#include "main.h"

void Usermenu(Node* head)
{
	char judge = 0, choose = 0;

	while (1) {
		system("CLS");
		printf("**************************************************\n");
		printf("\t\t�𾴵Ŀͻ�����ӭ��!\n");
		printf("\t       ��ѡ����Ҫ���еĲ���:\n");
		printf("\t\t1.���\n");
		printf("\t\t2.��ѯ�鼮��Ϣ\n");
		printf("\t\t3.�����鼮\n");
		printf("\t\t4.�黹�鼮\n");
		printf("\t\t5.�����鼮\n");
		printf("\t\t6.������һ����\n");
		printf("\t\t7.�˳�ϵͳ\n");
		printf("**************************************************\n");
		printf("������(1/2/3/4/5/6/7):\n");
		judge = _getch();
		switch (judge) {
		case '1':	//��ӡȫ���鼮��Ϣ
			printBook(head);
			break;
		case '2':	//�����ѯ
			findBook(head);
			break;
		case '3':	//�����鼮
			choose = '1';
			modifyRemainder(head, choose);
			break;
		case '4':	//�黹�鼮
			choose = '2';
			modifyRemainder(head, choose);
			break;
		case '5':	//�����鼮
			choose = '3';
			modifyRemainder(head, choose);
			break;
		case '6':	//�����׽���
			return;
		case '7':	//�˳�ϵͳ
			printf("���ѳɹ��˳�\n");
			exit(0);
		default:
			printf("�������������\n");
			break;
		}
		system("PAUSE");
	}
}