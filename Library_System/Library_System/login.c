#include "main.h"

void login(Node* head)
{
	Admin* adm = malloc(sizeof(Admin));
	int testaccount, testsecret;
	char judge = 'y';

	while (loadAdmin(adm)) {

	}

	while (1) {
		system("CLS");
		printf("**************************************************\n");
		printf("\t       ����Ա��½����\n");
		printf("**************************************************\n");
		printf("�������˺�:\n");
		scanf_s("%d", &testaccount);
		printf("����������:\n");
		scanf_s("%d", &testsecret);
		if (testaccount == adm->account && testsecret == adm->secret) {	//��֤�˺�����
			Adminmenu(adm, head);
			return;
		}
		else {
			printf("�˺Ż��������\n");
			printf("���Ի򷵻�(Y/N):\n");
			judge = _getch();
			if (judge != 'Y' && judge != 'y') {		//ѯ���Ƿ�����
				return;
			}
			else {
				continue;
			}
		}
	}

}