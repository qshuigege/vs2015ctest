#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[32];
	int age;
	double score;
};

void main() {
	struct student stu = {"Leslie", 59, 99.99};
	for (int i = 0; i < sizeof(stu.name)/sizeof(stu.name[0]); i++)
	{
		stu.name[i] = i+97;
	}
	stu.age = 59;
	stu.score = 99.99;

	printf("%s,%d,%lf", stu.name, stu.age, stu.score);

	getchar();
}