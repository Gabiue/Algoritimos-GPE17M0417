#include <SDL.h>
#include <SDL_ttf.h>
#include <stdio.h>
#include <stdlib.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define TILE_SIZE 20

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
TTF_Font* font = NULL;

int initSDL() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Erro ao iniciar SDL: %s\n", SDL_GetError());
        return 0;
    }
    window = SDL_CreateWindow("Snake Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (!window) {
        printf("Erro ao criar janela: %s\n", SDL_GetError());
        return 0;
    }
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        printf("Erro ao criar renderizador: %s\n", SDL_GetError());
        return 0;
    }
    if (TTF_Init() == -1) {
        printf("Erro ao iniciar SDL_ttf: %s\n", TTF_GetError());
        return 0;
    }
    font = TTF_OpenFont("arial.ttf", 24);
    if (!font) {
        printf("Erro ao carregar fonte: %s\n", TTF_GetError());
        return 0;
    }
    return 1;
}

void closeSDL() {
    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();
}

int main(int argc, char* args[]) {
    if (!initSDL()) {
        printf("Erro na inicialização do SDL\n");
        return 1;
    }

    // Loop de jogo (inicialmente vazio)
    SDL_Event e;
    int quit = 0;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = 1;
            }
        }
        // Aqui será o local para lógica e renderização do jogo.
    }

    closeSDL();
    return 0;
}

typedef struct {
    int x, y;
} Position;

Position snake[100];
int snakeLength = 1;
Position fruit;

void drawRect(int x, int y, SDL_Color color) {
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, 255);
    SDL_Rect rect = { x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE };
    SDL_RenderFillRect(renderer, &rect);
}

void renderGame() {
    SDL_Color snakeColor = { 0, 255, 0 };
    SDL_Color fruitColor = { 255, 0, 0 };

    // Renderizar a cobra
    for (int i = 0; i < snakeLength; i++) {
        drawRect(snake[i].x, snake[i].y, snakeColor);
    }

    // Renderizar a fruta
    drawRect(fruit.x, fruit.y, fruitColor);
}

void generateFruit() {
    fruit.x = rand() % (SCREEN_WIDTH / TILE_SIZE);
    fruit.y = rand() % (SCREEN_HEIGHT / TILE_SIZE);
}

int direction = 0; // 0: direita, 1: baixo, 2: esquerda, 3: cima

void updateSnakePosition() {
    Position prevPos = snake[0];
    Position newHead;
    switch (direction) {
        case 0: newHead = (Position){ prevPos.x + 1, prevPos.y }; break;
        case 1: newHead = (Position){ prevPos.x, prevPos.y + 1 }; break;
        case 2: newHead = (Position){ prevPos.x - 1, prevPos.y }; break;
        case 3: newHead = (Position){ prevPos.x, prevPos.y - 1 }; break;
    }

    for (int i = snakeLength; i > 0; i--) {
        snake[i] = snake[i - 1];
    }
    snake[0] = newHead;

    // Detecta se a cobra comeu a fruta
    if (snake[0].x == fruit.x && snake[0].y == fruit.y) {
        score += 10;
        snakeLength++;
        generateFruit();
    }
}
void renderScore() {
    SDL_Color whiteColor = { 255, 255, 255 };
    char scoreText[50];
    sprintf(scoreText, "Score: %d", score);

    SDL_Surface* textSurface = TTF_RenderText_Solid(font, scoreText, whiteColor);
    SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);

    SDL_Rect textRect = { 10, 10, textSurface->w, textSurface->h };
    SDL_RenderCopy(renderer, textTexture, NULL, &textRect);

    SDL_FreeSurface(textSurface);
    SDL_DestroyTexture(textTexture);
}

int main(int argc, char* args[]) {
    if (!initSDL()) return 1;

    generateFruit();
    snake[0] = (Position){ SCREEN_WIDTH / (2 * TILE_SIZE), SCREEN_HEIGHT / (2 * TILE_SIZE) };

    SDL_Event e;
    int quit = 0;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) quit = 1;
            if (e.type == SDL_KEYDOWN) {
                switch (e.key.keysym.sym) {
                    case SDLK_UP: direction = 3; break;
                    case SDLK_DOWN: direction = 1; break;
                    case SDLK_LEFT: direction = 2; break;
                    case SDLK_RIGHT: direction = 0; break;
                }
            }
        }
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        updateSnakePosition();
        renderGame();
        renderScore();

        SDL_RenderPresent(renderer);
        SDL_Delay(100); // Controla a velocidade do jogo
    }

    closeSDL();
    return 0;
}
