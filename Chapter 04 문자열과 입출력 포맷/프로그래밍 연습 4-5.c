/* 프로그래밍 연습 4-5 */
#include <stdio.h>

int main()
{
	float mbps, mb, mbs;
	scanf("%f", &mbps);
	scanf("%f", &mb);
	mbs = mbps / 8;
	printf("초당 %.2f 메가비트, %.2f 메가바이트 파일을\n%.2f초에 다운로드한다.\n", mbps, mb, mb / mbs);
	
	return 0;
}