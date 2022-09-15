
#include<stdio.h> //包含一个stdio.h的文件  （standard input output）

int main() //主函数=主程序的入口 一个程序只可以有一个main函数
{              //main前面的int表示main函数调用返回一个整形值
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	char ch = 'A';
	scanf("%d%d", &num1, &num2);//取地址符号&
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	printf("hehe 比特\n");//printf是一个打印函数：print function
	
	printf("%c\n", ch);//%c打印字符格式的数据，%d打印整形十进制数据，%f打印浮点型数据（小数），%p以地址形式打印
	                       //%x打印16进制数据
	printf("%d\n", sizeof(char)); 
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	
	
	return 0;// 返回0
}
 
