#include"game.h"

void game() {
	char ret = " ";
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	display_board(board, ROW, COL);
	while (1) {
		player_move(board, ROW, COL);
		ret=is_win(board, ROW, COL); 
		if (ret != 'C') {
			break;
		}
		//玩家赢返回*
		display_board(board, ROW, COL);
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
	}
	if (ret == "*") {
		printf("玩家赢!\n");
		display_board(board, ROW, COL);
	}
	
	else if (ret == "#") {
		printf("电脑赢！\n");
		display_board(board, ROW, COL);
	}
	else if (ret == 'Q') {
		printf("平局！\n");
		display_board(board, ROW, COL);
	}

}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);
}