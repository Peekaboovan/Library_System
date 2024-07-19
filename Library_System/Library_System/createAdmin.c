#include "main.h"

void createAdmin()
{
	FILE* pfile = fopen("./admin.info", "w");
	Admin adm;

	if (pfile == NULL) {
		printf("管理员信息获取失败\n");
		return;
	}
	printf("请创建管理员信息(姓名 账号 密码，中间用空格隔开):\n");
	scanf_s("%s", &adm.name, 20);
	scanf_s("%d", &adm.account);
	scanf_s("%d", &adm.secret);
	if (fwrite(&adm, sizeof(Admin), 1, pfile) != 1) {
		printf("保存管理员信息出错\n");
	}
	else {
		printf("创建成功\n");
	}
	fclose(pfile);
	pfile = NULL;
}