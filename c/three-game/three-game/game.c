#include"game.h"

void menu() {
	printf("1.play\n");
	printf("0.exit\n");
}

void display_board(char board[ROW][COL], int row, int col) { //打印棋盘
	for (int i = 0; i < row; i++) {
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		for (int j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			for (int j = 0; j < col; j++) {
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void InitBoard(char board[ROW][COL],int row,int col ) { //初始化数组，以空格填充
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

void player_move(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf("玩家下棋：\n");
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= row && y >= 1 && y <= col) {
		if (board[x - 1][y - 1] == ' ') {
			board[x-1][y-1] = '*';
		}
		else
			printf("该坐标被占用，请重新输入\n");
	}
	else
		printf("坐标非法，重新输入！\n");
}
void computer_move(char board[ROW][COL], int row, int col) {
	printf("电脑下棋：\n");
	while (1) {
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
	
}

int is_full(char board[ROW][COL],int row,int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	for (int i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') 
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[1][1];
	//判断平局
	if (is_full(board,row,col))
		return 'Q';
	return 'C';
}