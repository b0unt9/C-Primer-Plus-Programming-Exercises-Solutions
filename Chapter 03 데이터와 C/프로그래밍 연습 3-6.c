/* 프로그래밍 연습 3-6 */
#include <stdio.h>

int main()
{
	float mass = 3.0e-23;
	float quart = 950;
	float quarts;

	scanf("%f", &quarts);
	printf("%f\n", quarts * quart / mass);

	return 0;
}