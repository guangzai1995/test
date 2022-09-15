#include"test.h"

void print_mul_table(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%-2d*%-2d=%-4d ", j, i, i * j);
		}
		printf("\n");
	}
}

void swap_num(int* a,int* b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a= *a ^ *b;
}

void is_leap_year(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("是闰年！\n");
	else
		printf("不是闰年！\n");
}

bool is_prime(int num) {
	int count = 0;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			count = 1;
			break;
		}
	}
	if (count == 0)
		return true;
	else
		return false;
}

int fac_rec(int n) {
	if (n <= 1)
		return 1;
	else
		return n*fac_rec(n - 1);
}

int fac(int n) { //递归实现n的阶乘
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	return sum;
}
void print_rec(int n) { //打印一个整数的每一位 递归实现
	if (n >9)
		print_rec(n / 10);
	printf("%d ", n % 10);
}
int fac_rec_p(int n, int k) { //求n的k次方递归实现
	if (k < 1)
		return 1;
	else
		return n*fac_rec_p(n, k - 1);
}
int DigitSum(int n) { //计算一个数的每位之和 递归实现
	if (n < 10)
		return n;
	else
		return n%10+DigitSum(n / 10);
}
int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
int my_strlen_rec(char* str) {
	if (*str != '\0') 
		return 1 + my_strlen_rec(++str);
}

void reverse_string(char* str) {
	int len = my_strlen(str);
	char tmp = 0;
	tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) > 1)
		reverse_string(str + 1);
	*(str + len - 1) = tmp;
}

int sum(int n) {
	if (n <= 1)
		return 1;
	else
		return n + sum(n - 1);
}

int fib(int n) {
	if (n < 1)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	else {
		int fir = 1;
		int sec = 1;
		int thi = 0;
		for (int i = 3; i <=n; i++) {
			thi = fir + sec;
			fir = sec;
			sec = thi;
		}
	return thi;
	}
}
int fib_rec(int n) {
	if (n < 1)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	else
		return fib_rec(n - 1) + fib_rec(n - 2);
}
//实现函数init() 初始化数组为全0
void init(int* arr,int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}
}
//实现print()  打印数组的每个元素
void print_arr(int* arr, int n) {
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
//实现reverse()  函数完成数组元素的逆置。
void reverse(int* arr, int n) {
	for (int i = 0; i < n / 2; i++) {
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = tmp;
	}
}