/* 프로그래밍 연습 4-7 */
#include <stdio.h>
#include <float.h>

int main()
{
	double nd = 1.0 / 3.0;
	float fd = 1.0 / 3.0;
	
	printf("double 값:\n");
	printf("%.4lf %.12lf %.16lf\n", nd, nd, nd);
	printf("float 값:\n");
	printf("%.4f %.12f %.16f\n", fd, fd, fd);
	
	printf("\n");
	
	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	
	return 0;
}