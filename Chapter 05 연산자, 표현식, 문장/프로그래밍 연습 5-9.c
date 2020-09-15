/* 프로그래밍 연습 5-9 */
#include <stdio.h>

void temp(double f);

int main()
{
	double f;

	while (scanf("%lf", &f) == 1)
	{
		temp(f);
		printf("화씨 온도 입력 (q 이면 종료):\n");
	}
	printf("종료\n");
	
	return 0;
}

void temp(double f)
{
	const double c = 5.0 / 9.0 * (f - 32.0);
	const double k = c + 273.16;
	printf("화씨온도: %.2lf.\n", f);
	printf("섭씨온도: %.2lf.\n", c);
	printf("절대온도: %.2lf.\n", k);
}
