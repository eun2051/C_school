#include <stdio.h>

#define SIZE 3

void initializeBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' '; 
        }
    }
}

void printBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        if (i < SIZE - 1) printf("\n---|---|---\n");
    }
    printf("\n");
}

int isValidMove(char board[SIZE][SIZE], int x, int y) {
    return x >= 0 && x < SIZE && y >= 0 && y < SIZE && board[x][y] == ' ';
}

int checkWin(char board[SIZE][SIZE], char player) {
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return 1; 
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return 1; 
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return 1; 
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return 1; 
    return 0; 
}

int isDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') return 0; 
        }
    }
    return 1; 
}

void clearInputBuffer() {
    while (getchar() != '\n');
}

int main() {
    char board[SIZE][SIZE];
    char currentPlayer, playerX, playerO;
    int x, y;

    printf("플레이어 1, 선택하시오 (X or O): ");
    scanf(" %c", &playerX); 
    playerX = (playerX == 'X' || playerX == 'x') ? 'X' : 'O';
    playerO = (playerX == 'X') ? 'O' : 'X';

    printf("플레이어 1는 %c, 플레이어 2는 %c\n", playerX, playerO);
    printf("플레이어 1부터 시작합니다.\n");

    currentPlayer = playerX; 
    initializeBoard(board);  
    while (1) {
        printBoard(board);
        printf("플레이어 %c, 행과 열을 입력하시오. (0-2) (0-2): ", currentPlayer);
        scanf("%d %d", &x, &y);

        if (!isValidMove(board, x, y)) {
            printf("이미 존재하는 위치입니다. 다시 선택하세요.\n");
            continue;
        }

        board[x][y] = currentPlayer;

        if (checkWin(board, currentPlayer)) { 
            printBoard(board);
            printf("플레이어 %c 승리!\n", currentPlayer);
            break;
        }

        if (isDraw(board)) {
            printBoard(board);
            printf("무승부입니다!\n");
            break;
        }
        currentPlayer = (currentPlayer == playerX) ? playerO : playerX;
    }

    return 0;
}
