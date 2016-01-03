#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main1() {
	FILE *fp = fopen("D:\\1.txt", "r");//打开D盘下的1.txt文件，如果文件不存在，则打开失败，返回空指针
	FILE *fp1 = fopen("D:\\1.txt", "w");//打开D盘下的1.txt文件，如果文件不存在，则创建
	printf("%x", fp1);
	fclose(fp);
	fclose(fp1);
	getchar();
}

void main2() {
	//打开文件
	FILE *fp = fopen("D:\\1.txt", "w+");
	printf("%x", fp);

	//将字符写入文件
	char c = fputc('A', fp);//如果写入成功，则返回写入的字符
	printf("写入的字符为：%c", c);

	//关闭文件
	fclose(fp);
	getchar();
}

void main() {
	//打开文件
	FILE *fp = fopen("D:\\1.txt", "r");
	printf("%x", fp);

	//读取文件中的字符
	char c = fgetc(fp);//读取一个字符
	printf("读取的字符为：%c", c);

	while (1) {
		char c = fgetc(fp);
		printf("%c", c);
		if (c == EOF) {
			printf("已读到了文件的末尾");
			break;
		}
	}

	//关闭文件
	fclose(fp);
	getchar();
}