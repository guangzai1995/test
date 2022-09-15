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
		//printf(" %c | %c | %c \n",board[i][0], board[i][1],board[i][2]);               //打印数据                        //比较low的打印方式
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) 
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {            //打印分割行
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