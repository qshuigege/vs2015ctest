#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main1() {
	FILE *fp = fopen("D:\\1.txt", "r");//��D���µ�1.txt�ļ�������ļ������ڣ����ʧ�ܣ����ؿ�ָ��
	FILE *fp1 = fopen("D:\\1.txt", "w");//��D���µ�1.txt�ļ�������ļ������ڣ��򴴽�
	printf("%x", fp1);
	fclose(fp);
	fclose(fp1);
	getchar();
}

void main2() {
	//���ļ�
	FILE *fp = fopen("D:\\1.txt", "w+");
	printf("%x", fp);

	//���ַ�д���ļ�
	char c = fputc('A', fp);//���д��ɹ����򷵻�д����ַ�
	printf("д����ַ�Ϊ��%c", c);

	//�ر��ļ�
	fclose(fp);
	getchar();
}

void main() {
	//���ļ�
	FILE *fp = fopen("D:\\1.txt", "r");
	printf("%x", fp);

	//��ȡ�ļ��е��ַ�
	char c = fgetc(fp);//��ȡһ���ַ�
	printf("��ȡ���ַ�Ϊ��%c", c);

	while (1) {
		char c = fgetc(fp);
		printf("%c", c);
		if (c == EOF) {
			printf("�Ѷ������ļ���ĩβ");
			break;
		}
	}

	//�ر��ļ�
	fclose(fp);
	getchar();
}