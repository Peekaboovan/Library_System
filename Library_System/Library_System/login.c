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
		printf("\t       管理员登陆界面\n");
		printf("**************************************************\n");
		printf("请输入账号:\n");
		scanf_s("%d", &testaccount);
		printf("请输入密码:\n");
		scanf_s("%d", &testsecret);
		if (testaccount == adm->account && testsecret == adm->secret) {	//验证账号密码
			Adminmenu(adm, head);
			return;
		}
		else {
			printf("账号或密码错误\n");
			printf("重试或返回(Y/N):\n");
			judge = _getch();
			if (judge != 'Y' && judge != 'y') {		//询问是否重试
				return;
			}
			else {
				continue;
			}
		}
	}

}