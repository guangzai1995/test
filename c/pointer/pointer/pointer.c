#include<stdio.h>

int my_strlen(char* str) {
	char* start = str;
	char* end = str;
	while (*end != '\0') {
		end++;
	}
	return end - start;
}
int main() {
	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++) {
		printf("%d ", *p);
		printf("%d\n", p);
		p++;
		}*/

	char arr[] = "bitll";
	int len = my_strlen(arr);
	printf("%d\n", len);

	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	int i = 0;
	int *arr1[3] = { pa,pb,pc };
	for (i = 0; i < 3; i++) {
		printf("%d\n", arr1[i]);
	}
	return 0;
}