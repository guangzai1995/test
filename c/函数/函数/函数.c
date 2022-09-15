#include <stdio.h>
#include <string.h>

void swap(int* x, int* y) {
	int tem = 0;
	 tem= *y;
	*y = *x;
	*x = tem;
}

int is_prime(int n) {
	int x = 0;
	for (x = 2; x < n; x++) {
		if (n % x == 0)
			return 0;}
			return 1;
}

int is_run(int m) {
	if (((m % 4 == 0) && (m % 100 != 0)) || (m % 400 == 0))
		return 1;
	else
		return 0;
}

int s_bin(int arr[], int k,int sz) {
	
	int left = 0;
	int right = sz - 1;
	while (left<=right) {
		int mid = (left + right) / 2;
	if (arr[mid] < k)
	{
		left = mid + 1;
	}
	else if (arr[mid] > k) {
		right = mid - 1;
	}
	else
		return mid;
	}
	return -1;
}
	int main()
	{
		/*int a = 10;
		int b = 30;
		printf("a=%d  b=%d\n", a, b);
		swap(&a, &b);
		printf("a=%d  b=%d\n", a, b);*/

		//int i = 0;
		//int count = 0;
		//for (i = 101; i < 200; i += 2)
		//{
		//	if (is_prime(i) == 1) {
		//		count++;
		//		printf("%d  ", i);
		//	}				
		//}
		//printf("\ncount=%d  ", count);

		/*int i = 0;
		int count = 0;
		for (i = 1000; i <= 2000; i++) {
			if (is_run(i) == 1)
				printf("%d  ", i);
			count++;
		}
		printf("\ncount=%d", count);*/

		//int arr[] = {1,2,3,4,5,6,7,8,9,10};
		//int sz = sizeof(arr) / sizeof(arr[0]);
		//int k = 7;
		//int ret = s_bin(arr, k,sz);   //传递数组传递的是首元素的地址
		//if (ret == -1) 
		//	printf("找不到");
		//else
		//	printf("找到了，下标是：%d", ret);
		//

		printf("%d", printf("%d", printf("%d", 43)));
		printf("\n%d", 43);


				return 0;
}