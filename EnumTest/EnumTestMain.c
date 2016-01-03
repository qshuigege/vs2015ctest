#include <stdio.h>

enum MyEnum
{
	spring, summer, autumn, winter
}s = spring;

void main() {

	typedef enum MyEnum tpdfEnum;
	tpdfEnum tp = spring;
	enum MyEnum me = spring;
	printf("%d", me);
	me = summer;
	printf("%d", me);
	me = autumn;
	printf("%d", me);
	me = winter;
	printf("%d", me);
	printf("s=%d", s);
	printf("tp=%d", tp);
	getchar();
}