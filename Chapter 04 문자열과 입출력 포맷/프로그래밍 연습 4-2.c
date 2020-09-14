/* 프로그래밍 연습 4-2 */
#include <stdio.h>
#include <string.h>

int main()
{
	char name[10];
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s\n", strlen(name) + 3, name);
	return 0;
}