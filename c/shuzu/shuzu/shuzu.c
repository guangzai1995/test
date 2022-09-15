#include<stdio.h>

void bubble_sort(int arr[],int sz) {

	int i = 0;
	
	for (i = 0; i < sz-1; i++) {
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz-1-i; j++) {
			if (arr[j] > arr[j+1]) {
				int tem = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = tem;
				flag = 0;
			}
		}
		if (flag == 1) {
			break;
		}
	}
}

int main()
{

	//int arr[10]={1,2,3}; //不完全初始化，剩余元素为0
	//char arr2[5]={'a',98,'c'};  //中括号里面的数字代表数组里面元素的个数，且中括号里面不可以是变量，必须为常量
	//char arr3[] = "abcdef";  //若中括号里面没有注明元素个数，则会根据初始化的情况分配空间，此时，该数组有7个元素
	//int arr[3][4] = { {1,2,3}, {4,5} };//定义一个三行四列数组

	/*int i = 0;
	for (i = 0; i < 3; i++) {
		int j = 0;
		for (j = 0; j < 4; j++) {
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}*/

	int arr[] = { 9,0,1,2,3,4,5,6,7,8 };
	int i = 0;
	int sz= sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz); //数组传参的时候传的是首元素的地址,所以不可以在函数内部计算数组元素个数；
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;

} 