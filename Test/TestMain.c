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

//以逗号拆分字符串
void main10() {

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
	//char buf[1024];
	int count=0;
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

//自定义数组类型和数组指针类型
void main11() {
	typedef int(len5intarr)[5];
	len5intarr myarr = { 1,1,1,1,1 };

	for (int i = 0; i < 5; i++) {
		printf("\n%d",myarr[i]);
	}

	typedef int(*plen5intarr)[5];
	plen5intarr myP = &myarr;

	for (int i = 0; i < 5; i++)
	{
		printf("\n%d", (*myP)[i]);
	}
	int erweiarr[2][3] = { {1,2,3},{11,22,33} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			//printf("\n%d", erweiarr[i][j]);
			//printf("\n%d", *(erweiarr+i));
			printf("\n%p", *(erweiarr + i));
			printf("\n%p", erweiarr + i);
			printf("\n%p", erweiarr[i]);
		}
	}

	//int sanweiarr[2][2][2] = { { { 1,1 },{ 2,2 } },{ { 3,3 },{ 4,4 } } };
	int sanweiarr[2][3][4] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
	printf("\n=============三维数组==============");
	printf("\n%p", *(*(sanweiarr + 1) + 1));
	printf("\n%d", *(*(*(sanweiarr + 1) + 1) + 2));
	printf("\n%d", (*(*(sanweiarr + 1) + 1))[2] );

	system("pause");
}


void main12() {

	char* str = (char*)malloc(10 * sizeof(char));
	for (int i = 0; i < 9; i++) {
		*(str + i) = i+97;
	}
	*(str + 9) = '\0';
	printf("\n%s", str);

	if (str != NULL) {
		free(str);
		str = NULL;
	}
	/*printf("\n%p",str);
	printf("\n%p",(char*)&str);
	printf("\n%p",str+1);*/
	system("pause");
}

typedef struct _Student {
	char * name;
	int age;
}Student;

typedef struct _Teacher {
	Student stu;
	char * name;
	int age;
}Teacher;

typedef struct _Struct1 {
	char c1;
	char c2;
	char name[62];
	int  age;
}Struct1;
typedef struct _Struct2 {
	char name[62];
	int age;
	char c1;
	char c2;
}Struct2;


void main() {
	Student stu = {.name="xiaotongxue", .age = 22 };
	//stu.name = "xiaotongxue";
	//struct Teacher t;
	Teacher t;//如果没有typedef，声明变量时必须写成上行的形式
	t.stu = stu;
	t.name = "leslie";
	printf("\n%s", t.name);
	printf("\n%s", t.stu.name);
	printf("\n%d", t.stu.age);
	Teacher * p = NULL;
	p = &t;
	printf("\n%s", p->name);

	Struct1 st1;
	Struct2 st2;
	printf("\nsizeof(st1)=%d", sizeof(st1));
	printf("\nsizeof(st2)=%d", sizeof(st2));

}