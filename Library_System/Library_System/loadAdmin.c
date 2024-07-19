#include "main.h"

int loadAdmin(Admin* adm)
{
	FILE* pfile = fopen("./admin.info", "r");

	if (pfile == NULL) {
		createAdmin();
		system("PAUSE");
		return 1;
	}
	if (pfile == NULL) {
		printf("管理员信息缺失\n");
		return;
	}
	if (fread(adm, sizeof(Admin), 1, pfile) == 1) {
		return 0;
	}
	else {
		printf("管理员信息读取失败\n");
	}
}