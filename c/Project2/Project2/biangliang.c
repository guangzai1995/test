#include<stdio.h>
#define MAX 10 //define����ı�ʶ�������������ǳ�����
enum Sex
{
	MALE,
	FEMALE  //MALE FEMALE Ϊö�ٳ���
};
int main()
{
	const int num = 100;//  const���εĳ����� �������Ǳ�����            100 ���泣��

	printf("num=%d\n", num);

	printf("MAX=%d\n", MAX);

	printf("MALE=%d\n", MALE);

	printf("FEMALE=%d\n", FEMALE);

	return 0;
}