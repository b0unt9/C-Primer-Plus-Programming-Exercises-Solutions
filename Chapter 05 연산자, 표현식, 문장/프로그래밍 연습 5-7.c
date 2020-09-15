/* 프로그래밍 연습 5-7 */
#include <stdio.h>

void a(double n);

int main()
{
	double n;
	
	scanf("%lf", &n);
	a(n);
	
	return 0;
}

void a(double n)
{
	double a;
	a = n * n * n;
	printf("%e\n", a);
}
