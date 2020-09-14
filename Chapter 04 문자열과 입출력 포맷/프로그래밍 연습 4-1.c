/* 프로그래밍 연습 4-1 */
#include <stdio.h>

int main()
{
	char fname[10], lname[10];
	printf("이름 입력:\n");
	scanf("%s", fname);
	printf("성 입력:\n");
	scanf("%s", lname);
	printf("%s %s\n", lname, fname);
	return 0;
}