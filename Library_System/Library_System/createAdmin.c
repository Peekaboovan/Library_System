#include "main.h"

void createAdmin()
{
	FILE* pfile = fopen("./admin.info", "w");
	Admin adm;

	if (pfile == NULL) {
		printf("����Ա��Ϣ��ȡʧ��\n");
		return;
	}
	printf("�봴������Ա��Ϣ(���� �˺� ���룬�м��ÿո����):\n");
	scanf_s("%s", &adm.name, 20);
	scanf_s("%d", &adm.account);
	scanf_s("%d", &adm.secret);
	if (fwrite(&adm, sizeof(Admin), 1, pfile) != 1) {
		printf("�������Ա��Ϣ����\n");
	}
	else {
		printf("�����ɹ�\n");
	}
	fclose(pfile);
	pfile = NULL;
}