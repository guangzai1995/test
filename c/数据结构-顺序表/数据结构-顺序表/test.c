#include"test.h"

void SeqListInit(SL* s1) {
	memset(s1->a, 0, sizeof(SQDataType) * MAX);
	s1->size = 0;
}