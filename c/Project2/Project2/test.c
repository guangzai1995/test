
#include<stdio.h> //����һ��stdio.h���ļ�  ��standard input output��

int main() //������=���������� һ������ֻ������һ��main����
{              //mainǰ���int��ʾmain�������÷���һ������ֵ
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	char ch = 'A';
	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	printf("hehe ����\n");//printf��һ����ӡ������print function
	
	printf("%c\n", ch);//%c��ӡ�ַ���ʽ�����ݣ�%d��ӡ����ʮ�������ݣ�%f��ӡ���������ݣ�С������%p�Ե�ַ��ʽ��ӡ
	                       //%x��ӡ16��������
	printf("%d\n", sizeof(char)); 
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	
	
	return 0;// ����0
}
 
