#include <stdio.h>
#define PI 3.141592

void cal_area(double radius);

int main(void) {
	double radius;

	printf("원의 반지름을 입력하시오: ");
	scanf_s("%lf", &radius);

	cal_area(radius);

	return 0;
}

void cal_area(double radius) {
	printf("원의 면적은 %.2lf입니다.\n", PI * radius * radius);
}