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
	sum = Add(a, b);       //����
	printf("sum=%d\n", sum);
	*/
	/*int input = 0;
	printf("������أ�\n");
		printf("��Ҫ�ú�ѧϰ��(1/0)>:\n");
	scanf("%d", &input);
	if (input == 1)
	printf("��offer!\n");   //�������
	else
		printf("������\n");
		*/
	/*
	int line = 0;
	while(line < 20000)
	{
		printf("��һ�д���:%d\n",line);
		line++;                        //whileѭ��+�������
	}
	if (line >= 20000)
		printf("��offer\n");
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