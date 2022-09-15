//测试三子棋游戏

#include"game.h"

void menu() {
	printf("***********************************\n");
	printf("*****    1.play     0.exit    *****\n");
	printf("***********************************\n");
}
void game() {               //游戏的实现
	char board[ROW][COL]={0};                     //数组存放走出的棋盘信息
	initboard(board, ROW, COL);                   //初始化棋盘
	displayboard(board,ROW,COL);                      //打印棋盘
	while (1) {	                                     //下棋
		PlayerMove(board, ROW, COL);     //玩家下棋

	}
}

void test(){
	int input = 0;
	do {
		menu();
		printf("请选择：");
			scanf("%d", &input);
			switch(input) {
				case 1:
					game();
					break;
				case 0:
					printf("退出游戏\n");
					break;
				default:
					printf("选择错误，请重现选择\n");
					break;
			}
	} while (input);
}

int main() {
	test();
	return 0;
}