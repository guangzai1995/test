#include"game.h"


void initboard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		//printf(" %c | %c | %c \n",board[i][0], board[i][1],board[i][2]);               //��ӡ����                        //�Ƚ�low�Ĵ�ӡ��ʽ
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) 
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {            //��ӡ�ָ���
				printf("---");
				if (j < col-1)
					printf("|");
			}             
			printf("\n");
		}
		
	}
}                            
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
}