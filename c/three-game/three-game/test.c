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
		//���Ӯ����*
		display_board(board, ROW, COL);
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
	}
	if (ret == "*") {
		printf("���Ӯ!\n");
		display_board(board, ROW, COL);
	}
	
	else if (ret == "#") {
		printf("����Ӯ��\n");
		display_board(board, ROW, COL);
	}
	else if (ret == 'Q') {
		printf("ƽ�֣�\n");
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
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
}