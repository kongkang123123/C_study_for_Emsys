#include <stdio.h>


int main(void) {
	int input;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &input);

	printf("십의 자리 : %d\n", input / 10);
	printf("일의 자리 : %d\n", input % 10);

	return 0;
}