/* 프로그래밍 연습 5-3 */
#include <stdio.h>

int main()
{
	const int dw = 7;
	int n, days, weeks;
	scanf("%d", &n);
	while (n > 0)
	{
		weeks = n / dw;
		days = n % dw;
		printf("%d일은 %d주, %d일입니다.\n", n, weeks, days);
		scanf("%d", &n);
	}
	printf("루프 종료\n");
	
	return 0;
}
