#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // Biblioteca para _kbhit() e _getch()

#define WIDTH 20
#define HEIGHT 20

int gameOver;
int snakeX, snakeY, fruitX, fruitY, score;
int tailX[100], tailY[100]; // Arrays para armazenar posições do corpo da cobra
int nTail; // Comprimento da cauda

void setup() {
    gameOver = 0;
    snakeX = WIDTH / 2;
    snakeY = HEIGHT / 2;
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    score = 0;
}

void draw() {
    system("cls"); // Limpa a tela para desenhar o próximo frame

    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0) printf("#");

            if (i == snakeY && j == snakeX)
                printf("%c", 220); // Cabeça da cobra
            else if (i == fruitY && j == fruitX)
                printf("%c", 219); // Fruta
            else {
                int isTail = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o"); // Corpo da cobra
                        isTail = 1;
                    }
                }
                if (!isTail) printf(" ");
            }

            if (j == WIDTH - 1) printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");
    printf("Score: %d\n", score);
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'w': snakeY--; break;
            case 's': snakeY++; break;
            case 'a': snakeX--; break;
            case 'd': snakeX++; break;
            case 'x': gameOver = 1; break;
        }
    }
}

void logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;

    tailX[0] = snakeX;
    tailY[0] = snakeY;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (_getch()) {
        case 'w': snakeY--; break;
        case 's': snakeY++; break;
        case 'a': snakeX--; break;
        case 'd': snakeX++; break;
    }

    if (snakeX >= WIDTH) snakeX = 0; else if (snakeX < 0) snakeX = WIDTH - 1;
    if (snakeY >= HEIGHT) snakeY = 0; else if (snakeY < 0) snakeY = HEIGHT - 1;

    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == snakeX && tailY[i] == snakeY)
            gameOver = 1;
    }

    if (snakeX == fruitX && snakeY == fruitY) {
        score += 10;
        fruitX = rand() % WIDTH;
        fruitY = rand() % HEIGHT;
        nTail++;
    }
}

int main() {
    setup();
    while (!gameOver) {
        draw();
        input();
        logic();
    }
    return 0;
}