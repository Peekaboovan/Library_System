#include "main.h"

void Mainmenu(Node* head)
{
	char judge = 0;

	system("COLOR 7D");
	while (1) {
		system("CLS");	//���������
		printf("**************************************************\n");
		printf("\t  ��ӭʹ��ͼ����Ϣ����ϵͳ\n");
		printf("       ��ѡ���������(1.�ͻ�/2.����Ա)\n");
		printf("**************************************************\n");
		printf("������( 1 / 2 / 3(�˳�ϵͳ) ):\n");
		judge = _getch();
		switch (judge) {
		case '1':		//ת���ͻ�ѡ�����
			Usermenu(head);
			break;
		case '2':		//ת������Ա��½����
			login(head);
			break;
		case '3':	//�˳�ϵͳ
			printf("���ѳɹ��˳�\n");
			exit(0);
		default:	//�����������
			printf("�������������\n");
			system("PAUSE");
			break;
		}
	}
}