#include <stdio.h>
#define SEC_PER_MIUTE 60

int main(void) {
	int input, minute, second;

	printf("초를 입력하시오 : ");
	scanf_s("%d", &input);

	minute = input / SEC_PER_MIUTE;
	second = input % SEC_PER_MIUTE;

	printf("%d초는 %d분 %d초입니다.\n", input, minute, second);

	return 0;
}