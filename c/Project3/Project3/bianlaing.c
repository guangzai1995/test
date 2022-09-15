#include<stdio.h>
#define MAX 10 //define定义的标识符常量（本质是常量）
enum Sex
{
	MALE,
	FEMALE  //MALE FEMALE 为枚举常量
};
int main()
{
	const int num=100;//  const修饰的常变量 （本质是变量）            100 字面常量

	printf("num=%d\n", num);

	printf("MAX=%d\n", MAX);
	
	printf("MALE=%d\n", MALE);

	printf("FEMALE=%d\n", FEMALE);
	
	char arr1[] = { 'a','b','c','\0' };// \0是字符串结束标志   \t水平指标符（相当于tab） \\表示一个单斜杠
	                                   //    \'表示一个单引号   \"表示    一个双引号          \v表示垂直制表符
	                                  //    \ddd ddd代表三个八进制的数  \xdd dd表示两个十六进制的数
	char arr2[] = "abc";
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));// string length 求字符串长度
	printf("%d\n", strlen(arr2));
	return 0;
}