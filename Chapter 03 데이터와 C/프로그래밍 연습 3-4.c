/* 프로그래밍 연습 3-4 */
#include <stdio.h>

int main() 
{
	float a;

	printf("부동소수점 수를 입력하시오: ");
	scanf("%f", &a);
	printf("고정소수점 표기: %f\n", a);
	printf("지수 표기: %e\n", a);
	printf("p 표기: %a\n", a);

	return 0;
}