#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>
#define MaxSize 20

typedef struct {
	int data[MaxSize];
	int length;
}SqList;

bool ListInsert(SqList* L, int i, int e) {
	if (i<1 || i>L->length + 1)
		return false;
	if (L->length>MaxSize)
		return false;	
	for (int j = L->length; j >= i; j--) 
		L->data[j] = L->data[j - 1];
	L->data[i - 1] = e;
	L->length++;
	return true;
}

bool ListDelete(SqList* L, int i, int* e) {
	if (i<1 || i>L->length)
		return false;
	*e = L->data[i - 1];
	for (int j = i; j < L->length; j++) 
		L->data[j-1] = L->data[j];
	L->length--;
	return true;
	}

bool ListDelete_test(SqList* L, int i, int* e) {
	int tmp = 0; int count = 0;
	if (i<1 || i>L->length)
		return false;
	tmp = L->data[0];
	for (int j = 0; j < L->length - 1; j++) {
		if (tmp > L->data[j + 1]) {
		tmp = L->data[j+1];
		count++;
		}
			}
	*e = tmp;
	L->data[count+1] = L->data[L->length - 1];
		return true;
}

void InitList(SqList* L) {
	for (int i = 0; i < L->length; i++)
		L->data[i] = 0;
}

void reverse(SqList* L) {
	int* left = &(L->data[0]);
	int* right = &(L->data[L->length - 1]);
	while (left < right) {
		int tmp = 0;
		tmp =*left ;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reserch_delete(SqList* L,int n) {
	int e = 0;
	for (int i = 0; i < L->length - 1; i++) {
		if (L->data[i] == n) {
			ListDelete(L, (i+1), &e);
		}
	}
}

int main() {
	int i = 0; int tmp = 0; int tmp2 = 0;
	SqList L = {{5,1,2,3,4,8,9,2,4,4,6},11 };
	
	ListInsert(&L, 2, 9);
	
	ListDelete(&L, 5, &tmp);

	for (i = 0; i < L.length; i++)
		printf("%d  ",L.data[i] );
	printf("\n" );
	printf("%d\n", tmp);

	ListDelete_test(&L, L.length, &tmp2);
	for (i = 0; i < L.length; i++)
		printf("%d  ", L.data[i]);
	printf("\n");
	printf("%d\n", tmp2);

	reverse(&L);
	for (i = 0; i < L.length; i++)
		printf("%d  ", L.data[i]);
	printf("\n");
	
	reserch_delete(&L, 4);
	for (i = 0; i < L.length; i++)
		printf("%d  ", L.data[i]);
	printf("\n");
}