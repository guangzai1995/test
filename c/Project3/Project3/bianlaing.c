#include<stdio.h>
#define MAX 10 //define����ı�ʶ�������������ǳ�����
enum Sex
{
	MALE,
	FEMALE  //MALE FEMALE Ϊö�ٳ���
};
int main()
{
	const int num=100;//  const���εĳ����� �������Ǳ�����            100 ���泣��

	printf("num=%d\n", num);

	printf("MAX=%d\n", MAX);
	
	printf("MALE=%d\n", MALE);

	printf("FEMALE=%d\n", FEMALE);
	
	char arr1[] = { 'a','b','c','\0' };// \0���ַ���������־   \tˮƽָ������൱��tab�� \\��ʾһ����б��
	                                   //    \'��ʾһ��������   \"��ʾ    һ��˫����          \v��ʾ��ֱ�Ʊ��
	                                  //    \ddd ddd���������˽��Ƶ���  \xdd dd��ʾ����ʮ�����Ƶ���
	char arr2[] = "abc";
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));// string length ���ַ�������
	printf("%d\n", strlen(arr2));
	return 0;
}