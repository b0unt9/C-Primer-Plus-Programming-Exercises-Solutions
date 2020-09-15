/* 프로그래밍 연습 5-6 */
#include <stdio.h>

int main()
{
	int count = 0;
	int sum = 0;
	int end;

	scanf("%d", &end);
	while (count++ < end)
		sum = sum + count * count;
	printf("총합: %d", sum);
	
	return 0;
}
