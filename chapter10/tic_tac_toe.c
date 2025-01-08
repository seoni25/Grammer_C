//틱택토 게임을 웹사이트로 구현하기 전, 알고리즘 학습
/*
	작성자: 장영선
	last updated: 2025-01-08
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLUMES 3

int printBoard(char board[ROWS][COLUMES]);

int main(void)
{
	//의사 코드
	//(x, y) 좌표를 입력받는다
	// 'X'플레이어부터 시작한다.
	//만약 현재 입력자가 'X'라면 해당 좌표에 'X'를 입력한다
	//아니면 현재 입력자가 'O'라면 해당 좌표에 'O'를 입력한다
	//만약 해당 좌표에 이미 자리가 차있다면, 다시 (x,y)좌표를 입력받는다
	//만약 한 줄 빙고가 되었다면 게임이 끝난다

	int x, y;
	char board[ROWS][COLUMES];
	int turn = 0;
	char player;

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			board[row][col] = ' ';
		}
	}

	while (1) {
		printf("turn: %d\n", turn);
		printf("(x , y)좌표: ");
		scanf("%d %d", &x, &y);

		if (turn % 2 == 0)
			player = 'X';
		else
			player = 'O';

		if (board[x][y] == ' ') {
			if (player == 'X')
				board[x][y] = 'X';
			else if (player == 'O')
				board[x][y] = 'O';
		}
		else {
			printf("x, y좌표를 다시 입력해주세요\n");
			continue;
		}

		//보드판 출력
		printBoard(board);

		//종료조건 및 우승자 --> 미완성
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
			printf("%c 우승", player);
			break;
		}

		else if (turn == 8) {
			printf("무승부입니다\n");
			break;
		}

		//순번
		turn++;
	}
}

//보드판 출력
int printBoard(char board[ROWS][COLUMES]) {
	//주석처리한 이유: board배열에 이미 문자가 초기화 되어있기 때문에, " "이든, "X"이든, "O"이든 그냥 출력만 해주면 됨.
	for (int row = 0; row < 3; row++) {
		printf("---|---|---\n");
		for (int col = 0; col < 3; col++) {
			//if (board[row][col] == 'X' || board[row][col] == 'O') {
			printf(" %c ", board[row][col]);
			if (col != 2)
				printf("|");
			//}
			/*else {
				printf("   ");
				if(col != 2)
					printf("|");
			}*/
		}
		printf("\n");
	}
}