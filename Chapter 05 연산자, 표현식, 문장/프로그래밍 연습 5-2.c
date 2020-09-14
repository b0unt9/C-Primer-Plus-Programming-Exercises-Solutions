/* 프로그래밍 연습 5-2 */
#include <stdio.h>

int main()
{
	int n, m;
	
	scanf("%d", &n);
	m = n + 10;
	while (n <= m)
	{
		printf("%d\n", n);
		n++;
	}
	
	return 0;
}
