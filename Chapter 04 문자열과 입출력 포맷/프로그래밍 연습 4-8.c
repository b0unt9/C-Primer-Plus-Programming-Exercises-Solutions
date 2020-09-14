/* 프로그래밍 연습 4-8 */
#include <stdio.h>

int main()
{
	float miles, gallons, mpg, lp100;
	const float lpg = 3.785;
	const float kpm = 1.609;
	
	scanf("%f", &miles);
	scanf("%f", &gallons);
	
	mpg = miles / gallons;
	printf("마일당 갤런: %.1f\n", mpg);
	
	lp100 = 1 / (mpg * 100 * kpm / lpg); 
	printf("100km당 리터: %.1f\n", lp100);
	
	return 0;
}