#include<stdio.h> 

Add(int x, int y) {
	int z = x + y;
	return z;
}

Max(int a, int b) {

	if (a > b) 
		return a;
	else
		return b;
}
int main()
{
	/*
	int a = 20;
	int b = 30;
	int sum = 0;
	sum = Add(a, b);       //函数
	printf("sum=%d\n", sum);
	*/
	/*int input = 0;
	printf("加入比特？\n");
		printf("你要好好学习吗？(1/0)>:\n");
	scanf("%d", &input);
	if (input == 1)
	printf("好offer!\n");   //条件语句
	else
		printf("卖红薯\n");
		*/
	/*
	int line = 0;
	while(line < 20000)
	{
		printf("敲一行代码:%d\n",line);
		line++;                        //while循环+条件语句
	}
	if (line >= 20000)
		printf("好offer\n");
	*/
	
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int i = 0;
	while (i < 10) {
		printf("%d ", i);
		i++;
	}
	int m = 30;
	int* n = &m;
	
	//u=Max(m,  n);
	printf("%d",sizeof n);
	return 0;
}