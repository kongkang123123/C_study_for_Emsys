#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int x, y, answer, i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++) {
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf_s("%d", &answer);
		if (x + y == answer) {
			printf("맞았습니다.\n");
		}
		else {
			printf("틀렸습니다.\n");
		}
	}

	return 0;
}