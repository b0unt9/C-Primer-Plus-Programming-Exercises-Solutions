/* 프로그래밍 연습 5-1 */
#include <stdio.h>
int main()
{
	int tm, h, m;
	const int mph = 60;
	
	scanf("%d", &tm);
	while (tm > 0)
	{
		h = tm / mph;
		m = tm % mph;
		printf("%d분은 %d시간 and %d분이다.\n", tm, h, m);
		scanf("%d", &tm);
	}
	printf("루프 종료\n");
	
	return 0;
}
