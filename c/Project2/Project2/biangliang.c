#include<stdio.h>
#define MAX 10 //define定义的标识符常量（本质是常量）
enum Sex
{
	MALE,
	FEMALE  //MALE FEMALE 为枚举常量
};
int main()
{
	const int num = 100;//  const修饰的常变量 （本质是变量）            100 字面常量

	printf("num=%d\n", num);

	printf("MAX=%d\n", MAX);

	printf("MALE=%d\n", MALE);

	printf("FEMALE=%d\n", FEMALE);

	return 0;
}