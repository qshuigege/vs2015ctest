#include <stdio.h>

union MyUnion {
	int grade;
	char point;
};

void main() {
	union MyUnion mu;
	mu.grade = 2;
	mu.point = 'a';

	printf("%d,%c", mu.grade, mu.point);

	getchar();
}