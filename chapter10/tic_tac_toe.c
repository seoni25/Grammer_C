//ƽ���� ������ ������Ʈ�� �����ϱ� ��, �˰��� �н�
/*
	�ۼ���: �念��
	last updated: 2025-01-08
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 3
#define COLUMES 3

int printBoard(char board[ROWS][COLUMES]);

int main(void)
{
	//�ǻ� �ڵ�
	//(x, y) ��ǥ�� �Է¹޴´�
	// 'X'�÷��̾���� �����Ѵ�.
	//���� ���� �Է��ڰ� 'X'��� �ش� ��ǥ�� 'X'�� �Է��Ѵ�
	//�ƴϸ� ���� �Է��ڰ� 'O'��� �ش� ��ǥ�� 'O'�� �Է��Ѵ�
	//���� �ش� ��ǥ�� �̹� �ڸ��� ���ִٸ�, �ٽ� (x,y)��ǥ�� �Է¹޴´�
	//���� �� �� ���� �Ǿ��ٸ� ������ ������

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
		printf("(x , y)��ǥ: ");
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
			printf("x, y��ǥ�� �ٽ� �Է����ּ���\n");
			continue;
		}

		//������ ���
		printBoard(board);

		//�������� �� ����� --> �̿ϼ�
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
			printf("%c ���", player);
			break;
		}

		else if (turn == 8) {
			printf("���º��Դϴ�\n");
			break;
		}

		//����
		turn++;
	}
}

//������ ���
int printBoard(char board[ROWS][COLUMES]) {
	//�ּ�ó���� ����: board�迭�� �̹� ���ڰ� �ʱ�ȭ �Ǿ��ֱ� ������, " "�̵�, "X"�̵�, "O"�̵� �׳� ��¸� ���ָ� ��.
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