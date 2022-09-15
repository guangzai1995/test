#include<stdio.h>

void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4)
}

int main() {
	int x = 7;
	int i = 0;
	int y = 0;
	int count = 0;
	//scanf("&d",&x);
	
	for (i = 0; i <32; i++) {
		y = (x >> i) & 1;
		if (y == 1) 
		count++;
			}
		int arr[10] = { 0 };
		char ch[10] = { 0 };
		printf("%d\n", sizeof(arr));//(1)
		printf("%d\n", sizeof(ch));//(3)
		test1(arr);
		test2(ch);
		return 0;
	

}
