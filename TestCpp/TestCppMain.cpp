#include "iostream"
#include "MyCircle.h"
#include "MyPoint.h"

using namespace std;

typedef struct _Teacher {
	char name[64];
	int age;
}Teacher;

void testM001(Teacher t){
	t.age = 10;
	cout << t.age << endl;
}
void main01() {
	//printf("hello cpp\n");
	cout << "hello world" << endl;
	Teacher t = { "xiaotongxue", 22 };
	testM001(t);
	cout << t.age << endl;
	const int a = 10;
	int b = 10;
	int *p2 = (int*)&b;
	//a = 11;
	int *p = (int *)&a;
	*p = 111;
	printf("%d\n", a);
	printf("%d\n", *p);

	system("pause");
}


class Circle {

public: 
	int r;
	double s;
};

void main02() {
	Circle c;
	c.r = 3;
	c.s = 3.14*c.r*c.r;
	printf("%f\n", c.s);
	system("pause");
}

void main() {
	MyCircle c;
	MyPoint p;

	c.r = 10;
	double s = c.calcArea(c.r);
	cout << s << endl;

	system("pause");
}
