/* 프로그래밍 연습 4-4 */
#include <stdio.h>

int main()
{
	float inch, cm, m;
	char name[10];

	scanf("%f", &inch);
	scanf("%s", &name);
	
	m = cm * 2.54 / 100;
	printf("%s 씨, 당신의 키는 %.2f 미터입니다.\n", name, m);
	
	return 0;
}