#include <stdio.h>

void main() {
	int a[2][3] = { 1,2,3,4,5,6 };
	printf("\nsizeof(a)=%d", sizeof(a));

	int(*p)[3] = a;

	printf("\n%p", &(a[0][0]));
	printf("\n%p", a[0]);
	printf("\n%p", a);
	printf("\n%p", &(a[1][0]));
	printf("\n%d", p[1][2]);
	printf("\n*p=%p", *p);
	printf("\n*a=%p", *a);
	printf("\nsizeof(p)=%d", sizeof(p));
	printf("\nsizeof(a)=%d", sizeof(a));
	printf("\nsizeof(*p)=%d", sizeof(*p));
	printf("\nsizeof(*a)=%d", sizeof(*a));
	printf("\np=%p", p);
	printf("\na=%p", a);
	printf("\nsizeof(*p + 0)%d", sizeof(*p + 0));
	printf("\nsizeof(*p + 1)%d", sizeof(*p + 1));
	printf("\nsizeof(*p + 2)%d", sizeof(*p + 2));
	printf("\nsizeof(p + 0)%d", sizeof(p + 0));
	printf("\n---------------------------------");
	printf("\nsizeof(a[0])=%d", sizeof(a[0]));
	printf("\nsizeof(a[0]+0)=%d", sizeof(a[0] + 0));
	printf("\nsizeof(a+0)=%d", sizeof(a + 0));
	printf("\nsizeof(a+1)=%d", sizeof(a + 1));

	int b[10] = {8};
	printf("\n%d", sizeof(b));
	printf("\n%d", sizeof(*b));
	printf("\n%d", *b);

	char arr1[20] = "do you like mi 4i?";
	char arr2[20] = "are you ok?";
	//arr1 = arr2;
	getchar();
}