#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 01;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			board[i][j] = set; 
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++) {
		printf("%d ", i); //打印行号
		for (j = 1; j <= col; j++) {
						printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
		while (count)
		{
		int x = rand()%row+1;//1-9
		int y = rand()%col+1;
		if (board[x][y] == '0') 
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y) {
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] + 8 * '0';

}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (1) {
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {  
			if (mine[x][y] == '1') {          //是雷
				printf("很遗憾，你被炸死了！");
					DisplayBoard(mine, row, col);
					break;
			}
			else   //不是雷
			{
				//计算周围几个雷
			int count=get_mine_count(mine,x,y);
			show[x][y] = count + '0';
			DisplayBoard(show, row, col);
			win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT) {
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}
