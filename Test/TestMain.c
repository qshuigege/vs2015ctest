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

	printf("排序后a=%d, b=%d, c=%c", a, b, c);
}

//打开百度
void main3() {
	ShellExecuteA(0, "open", "https://www.baidu.com", 0, 0, 0);
}

int add(int a, int b) {
	return a + b;
}

void main4() {
	//指针函数
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

//冒泡排序方法
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

//输出字符串数组的每一个元素
void printStrArr(char * * arr, int len) {
	for (int i = 0; i < len; i++)
	{
		printf("\n%s", arr[i]);
	}
}

//输出字符串数组的每一个元素
void printStrArr2(char arr[4][4], int len) {
	for (int i = 0; i < len; i++)
	{
		printf("\n%s", arr[i]);
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

	printf("排序之后：\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", strArr[i]);

	}


	system("pause");
}

//字符数组表示字符串
void main8() {
	char * pArr[] = { "aaa", "bbb", "ccc", "111", "dddddddd" };
	//char(*arrP)[5] = pArr;
	char str[4][4] = { "aaaa", "bbbb", "cccc", "1111" };
	//printStrArr(str, 4);//“函数”:“char **”与“char [4][4]”的间接级别不同
	printStrArr2(str, 4);
	char cArr[4][4] = { 'a', 'b', 'c', '1', 'b', 'c', '1', 'b', 'c', '1', 'b', 'c', '1', 'b', 'c', '1' };
	printf("\n%c", str[0][0]);
	printf("\n%s", str);
	printf("\n%s", str[0]);
	printf("\n%s", str[1]);
	printf("\nhello world!\n");


	char * s1;
	char s2[] = {'a','b'};
	//char s2[] = "abcde";
	//char s2[] = {"abcde"};
	char s3[5] = "abcde";
	char s4[5] = "aaaaa";
	s1 = s4;
	printf("\ns1的第0位是%c", s1[0]);
	s1 = s2;
	printf("\ns1的第1位是%c", s1[1]);
	for (int i = 0; i < 3; i++)
	{
		printf("\n%c--%d",s2[i],i);
	}

	strcpy(str[0], "fffffffff");
	printf("\n%s", str[0]);
	printf("\n%s", str[1]);
	printf("\n%s", str[2]);
	printf("\n%s", str[3]);

	char * strArr[4] = {"111","222","333","444"};
	printStrArr(strArr, 4);

	system("pause");
}

//手动分配内存构造字符串数组
void main9() {

	char ** arr = malloc(10 * sizeof(char *));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = (char *)malloc(100 * sizeof(char));
		sprintf(arr[i], "%d%d%d", i, i, i);
	}

	printStrArr(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		free(arr[i]);
	}
	free(arr);

	system("pause");
}

void splitStr() {
	
}
void main() {

	char * p = "aaaaa,bbbbb,ccccc,ddddd,eeeee";
	char * tmp = p;
	char * tmp2 = p;
	/*tmp = strchr(p, ',');
	printf("\n%s", p);
	printf("\n%s", tmp);
	printf("\n%d", tmp - p);

	char result[1024]="\a0";
	memcpy(result, p, tmp - p);

	printf("\n%s", result);*/
	char result[1024];
	char buf[1024];
	int count;
	int tmpcount;
	do {
		tmp = strchr(tmp2, ',');
		tmpcount = tmp - tmp2;
		memcpy(result, tmp2, tmpcount);
		count = count + tmpcount;
		tmp = tmp + 1;
		tmp2 = tmp;
		printf("\n%s", result);
	} while (tmp != NULL);
	system("pause");
}

