/* 프로그래밍 연습 3-9 */
#include <stdio.h>

int main()
{
    float cups, pints, ounces, tablespoons, teaspoons;
    
	scanf("%f", &cups);

    pints = cups / 2;
	ounces = cups * 8;
	tablespoons = ounces * 2;
	teaspoons = tablespoons * 3;

	printf("%.2f pints\n", pints);
	printf("%.2f ounces\n", ounces);
	printf("%.2f tablespoons\n", tablespoons);
	printf("%.2f teaspoons\n", teaspoons);
	
	return 0;
}