//������������Ϸ

#include"game.h"

void menu() {
	printf("***********************************\n");
	printf("*****    1.play     0.exit    *****\n");
	printf("***********************************\n");
}
void game() {               //��Ϸ��ʵ��
	char board[ROW][COL]={0};                     //�������߳���������Ϣ
	initboard(board, ROW, COL);                   //��ʼ������
	displayboard(board,ROW,COL);                      //��ӡ����
	while (1) {	                                     //����
		PlayerMove(board, ROW, COL);     //�������

	}
}

void test(){
	int input = 0;
	do {
		menu();
		printf("��ѡ��");
			scanf("%d", &input);
			switch(input) {
				case 1:
					game();
					break;
				case 0:
					printf("�˳���Ϸ\n");
					break;
				default:
					printf("ѡ�����������ѡ��\n");
					break;
			}
	} while (input);
}

int main() {
	test();
	return 0;
}