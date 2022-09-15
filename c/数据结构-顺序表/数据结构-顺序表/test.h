#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define MAX 10
typedef int SQDataType;
typedef struct SeqList {
	SQDataType a[MAX];
	int size;
}SL;

void SeqListInit( SL* s1); 