#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<time.h>
#include<string.h>
void menu()
{
	printf("**************************\n");
	printf("****  1.play  0.exit  ****\n");
	printf("**************************\n");
}
void game() {
	int ret = 0;
	int guess = 0;
		ret= rand()%100+1; //生成随机数在0到rand MAX（32767）之间
		while (1) {
			printf("请猜数字>:");
			scanf("%d", &guess);
			if (guess > ret) {
				printf("猜大了\n");
			}
			else if (guess < ret) {
				printf("猜小了\n");
			}
			else {
			printf("恭喜你猜对了\n");
			break;
			}
			
		}
}
int main()
{
	//	int num = 0;
	//	static int m = 0;
	//	while (num <= 100) {		//输出0-100的奇数
	//		m = num % 2;
	//	if (m == 1)
	//		printf(" %d",num);
	//		num++;
		//}

		//int ch = 0;
		//while ((ch = getchar ())!= EOF) {
		//	putchar(ch);
		//}

		//int ch = 0;
		//int ret = 0;
		//char password[20] = { 0 };
		//printf("请输入密码:>");
		//scanf("%s", password);   //输入密码，并存放在password数组中， 读取完成后缓冲区还剩余一个‘\n’，
		//while ((ch = getchar())!= '\n')      //读取缓冲区中剩余内容
		//{;}
		//printf("请确认（Y/N）:>");
		//ret = getchar();
		//if (ret == 'Y')
		//	printf("确认成功\n");
		//else
		//	printf("确认失败\n");

		/*int n = 0;
		int m = 0;
		int sum = 1;
		scanf("%d", &n);
		for (m = 1; m <= n; m++)
		{
			sum =sum*m;
		}
		printf("sum=%d", sum);*/

		/*int n = 0;
		int sum = 1;
		int i = 0;
		int SUM = 0;
		scanf("%d", &i);
		for (n = 1; n <= i; n++) {
			sum = sum*n;
			SUM =SUM+sum;
		}
		printf("SUM=%d", SUM);*/

		/*int m = 0;
		int n = 0;
		scanf("%d%d", &m, &n);
		int tem =0;
		while (m%n) {
			tem = m % n;
			m = n;
			n = tem;
		}
		printf("最大公约数为%d", n);*/

		/*int year = 0;
		for (year = 1000; year <= 2000; year++) {

			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 100 == 0)) {
				printf("%d  ", year);
			}
		}*/

		// int i = 0;
		//int count = 0;
		//for (i = 100; i <= 200; i++) {
		//	//判断i是否素数  1.试除法
		//	int j = 0;
		//		for (j = 2; j < i; j++) {
		//			if (i % j == 0)
		//				break;
		//						}
		//		if (j == i)
		//		{printf("%d  ", i);
		//	     count++;
		//		}
		////}
		//printf("\ncount=%d", count);

		/*int i = 0;
		for (i = 1; i <= 9; i++) {
			int j = 0;
			for (j = 1; j <= i; j++) {
				printf("%d*%d=%-2d ", i, j, i * j);
			}
			printf("\n");
		}*/

		int input = 0;
		srand((unsigned int)time(NULL));         //拿时间戳设置随机数起点
		do {
			menu();
			printf("请选择>:");
			scanf("%d",&input);
			switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
			}
		}
		while(input);

	/*char shuru[] = { 0 };
	system("shutdown -s -t 60");
agin:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
	scanf("%s", shuru);
	if (strcmp(shuru, "我是猪") == 0) {
		system("shutdown -a");
	}
	else
	{
		goto agin;
	}*/
			
			
	return 0;
}

