/* 프로그래밍 연습 3-1 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("이 시스템의 최대 int 값: %d\n", INT_MAX);
	printf("이 시스템의 최대 float 값: %e\n", FLT_MAX);
	printf("이 시스템의 최소 float 값: %e\n", FLT_MIN);
	printf("정수 오버플로: %d + 1 = %d\n", INT_MAX, INT_MAX + 1);
	printf("부동소수점 수 오버플로: %e * 10 = %e\n", FLT_MAX, FLT_MAX * 10);
	printf("부동소수점 수 언더플로: %e / 10 = %e\n", FLT_MIN, FLT_MIN / 10);
	
	return 0;
}