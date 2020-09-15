/* 프로그래밍 연습 5-4 */
#include <stdio.h>

int main()
{
	const float cmpf = 30.48;
	const float cmpi = 2.54;
	float cm, inches;
	int feet;
	
	printf("센티미터 단위로 입력하시오: ");
	scanf("%f", &cm);
	while (cm > 0)
	{
		feet = cm / cmpf;
		inches = (cm - feet * cmpf) / cmpi;
		printf("%.1f센티미터는 %d피트, %.1f인치입니다.\n", cm, feet, inches);
		printf("센티미터 단위로 입력하시오(끝내려면 <= 0): ");
		scanf("%f", &cm);
	}
	printf("안녕!\n");
	
	return 0;
}
