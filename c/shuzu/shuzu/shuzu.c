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

	//int arr[10]={1,2,3}; //����ȫ��ʼ����ʣ��Ԫ��Ϊ0
	//char arr2[5]={'a',98,'c'};  //��������������ִ�����������Ԫ�صĸ����������������治�����Ǳ���������Ϊ����
	//char arr3[] = "abcdef";  //������������û��ע��Ԫ�ظ����������ݳ�ʼ�����������ռ䣬��ʱ����������7��Ԫ��
	//int arr[3][4] = { {1,2,3}, {4,5} };//����һ��������������

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
	bubble_sort(arr,sz); //���鴫�ε�ʱ�򴫵�����Ԫ�صĵ�ַ,���Բ������ں����ڲ���������Ԫ�ظ�����
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;

} 