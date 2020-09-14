/* 프로그래밍 연습 4-6 */
#include <stdio.h>
#include <string.h>

int main()
{
	char fname[10], lname[10];
	
	printf("이름:\n");
	scanf("%s", &fname);
	printf("성:\n");
	scanf("%s", &lname);
	
	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
	
	return 0;
}