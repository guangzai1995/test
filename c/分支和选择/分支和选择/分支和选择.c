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
		ret= rand()%100+1; //�����������0��rand MAX��32767��֮��
		while (1) {
			printf("�������>:");
			scanf("%d", &guess);
			if (guess > ret) {
				printf("�´���\n");
			}
			else if (guess < ret) {
				printf("��С��\n");
			}
			else {
			printf("��ϲ��¶���\n");
			break;
			}
			
		}
}
int main()
{
	//	int num = 0;
	//	static int m = 0;
	//	while (num <= 100) {		//���0-100������
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
		//printf("����������:>");
		//scanf("%s", password);   //�������룬�������password�����У� ��ȡ��ɺ󻺳�����ʣ��һ����\n����
		//while ((ch = getchar())!= '\n')      //��ȡ��������ʣ������
		//{;}
		//printf("��ȷ�ϣ�Y/N��:>");
		//ret = getchar();
		//if (ret == 'Y')
		//	printf("ȷ�ϳɹ�\n");
		//else
		//	printf("ȷ��ʧ��\n");

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
		printf("���Լ��Ϊ%d", n);*/

		/*int year = 0;
		for (year = 1000; year <= 2000; year++) {

			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 100 == 0)) {
				printf("%d  ", year);
			}
		}*/

		// int i = 0;
		//int count = 0;
		//for (i = 100; i <= 200; i++) {
		//	//�ж�i�Ƿ�����  1.�Գ���
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
		srand((unsigned int)time(NULL));         //��ʱ���������������
		do {
			menu();
			printf("��ѡ��>:");
			scanf("%d",&input);
			switch (input) {
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
			}
		}
		while(input);

	/*char shuru[] = { 0 };
	system("shutdown -s -t 60");
agin:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
	scanf("%s", shuru);
	if (strcmp(shuru, "������") == 0) {
		system("shutdown -a");
	}
	else
	{
		goto agin;
	}*/
			
			
	return 0;
}

