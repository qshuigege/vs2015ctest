#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void main1() {
	int a = 10;
	printf("Hello, World!%d", a);
	int b = 11;
	printf("\nb=%d", b);

}

void main2() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > c) {
		int temp = a;
		a = c;
		c = temp;
	}
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (b>c)
	{
		int temp = b;
		b = c;
		c = temp;
	}

	printf("�����a=%d, b=%d, c=%c", a, b, c);
}

//�򿪰ٶ�
void main3() {
	ShellExecuteA(0, "open", "https://www.baidu.com", 0, 0, 0);
}

int add(int a, int b) {
	return a + b;
}

void main4() {
	//ָ�뺯��
	int(*p)(int a, int b);
	p = add;
	printf("aaaaaaa%d", p(1, 1));
}

void main5() {
	//
	char a = 'A';
	char b = 'B';
	char c = 'C';

	char* p = &a;
	char **pp = &p;
	//printf("%x", p);
	//printf("%x", pp);
}

void main6() {

	int *p = (int*)malloc(10);

	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
		//printf("\n%x,%d", &p[i], p[i]);

	}

	free(p);
	p = NULL;

	//getchar();

}
void sortStrArr(char * * strArr, int len) {
	char * temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (strcmp(strArr[i], strArr[j])>0) {
				temp = strArr[i];
				strArr[i] = strArr[j];
				strArr[j] = temp;
			}
		}
	}
}

void main7() {
	char * strArr[] = { "aaa", "bbb", "ccc", "111" };
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", strArr[i]);

	}

	/*char * temp;
	for (int i = 0; i < 4; i++)
	{
	for (int j = i+1; j < 4; j++)
	{
	if (strcmp(strArr[i], strArr[j])>0) {
	temp = strArr[i];
	strArr[i] = strArr[j];
	strArr[j] = temp;
	}
	}
	}*/

	sortStrArr(strArr, 4);

	printf("����֮��\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", strArr[i]);

	}


	system("pause");
}


void main() {
	//char str[4][4] = { { "aaa", "bbb", "ccc", "111" },{ "ddd","","","" },{ "","","","" },{ "","","","" } };
	char str[4][4] = { "aaaa", "bbbb", "cccc", "1111" };
	char cArr[4][4] = { 'a', 'b', 'c', '1', 'b', 'c', '1', 'b', 'c', '1', 'b', 'c', '1', 'b', 'c', '1' };
	printf("\n%c", str[0][0]);
	printf("\n%s", str);
	printf("\n%s", str[1]);
	printf("\nhello world!\n");

	char * s1;
	char s2[] = {'a','b'};
	//char s2[] = "abcde";
	//char s2[] = {"abcde"};
	char s3[5] = "abcde";
	char s4[5] = "aaaaa";
	s1 = s4;
	printf("\ns1�ĵ�0λ��%c", s1[0]);
	s1 = s2;
	printf("\ns1�ĵ�1λ��%c", s1[1]);
	for (int i = 0; i < 3; i++)
	{
		printf("\n%c--%d",s2[i],i);
	}


	system("pause");
}
