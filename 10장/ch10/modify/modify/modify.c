#include <stdio.h>
#define SIZE 7

void modify_array(int a[], int size);
void print_array(int a[], int size);

int main(void) {
	int list[SIZE] = { 1,2,3,4,5,6,7 };

	print_array(list, SIZE);
	modify_array(list, SIZE);	// 배열은 원본이 전달됨.
	print_array(list, SIZE);

	return 0;
}
// a[]를 변경하면 원본이 변경된다.
void modify_array(int a[], int size) {
	int i;

	for (i = 0; i < SIZE; i++) {
		++a[i];
	}
}
// 배열 요소들을 화면에 출력한다.
void print_array(int a[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");
}