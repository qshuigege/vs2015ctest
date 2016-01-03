#include <stdio.h>
#include <string.h>
#include <stdlib.h>


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

void main() {
	char * strArr[] = {"aaa", "bbb", "ccc", "111"};
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

	printf("≈≈–Ú÷Æ∫Û£∫\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", strArr[i]);

	}


	system("pause");
}


