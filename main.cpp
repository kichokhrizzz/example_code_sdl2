#include <SDL.h>
#include <iostream>

int main(int argc, char* argv[]) {
    // Inicializar SDL
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Crear la ventana
    SDL_Window* win = SDL_CreateWindow("Hello, SDL2!", 100, 100, 1080, 720, SDL_WINDOW_SHOWN);
    if (win == NULL) {
        std::cerr << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    // Crear el renderer
    SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (ren == NULL) {
        std::cerr << "SDL_CreateRenderer Error: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(win);
        SDL_Quit();
        return 1;
    }

    // Establecer el color de dibujo (rojo en este caso)
    SDL_SetRenderDrawColor(ren, 255, 0, 0, 255); // R, G, B, A

    // Limpiar la pantalla con el color establecido
    SDL_RenderClear(ren);

    // Definir el rectángulo
    SDL_Rect rect;
    rect.x = 0; // Posición X
    rect.y = 0; // Posición Y
    rect.w = 20; // Ancho
    rect.h = 20; // Alto

    // Dibujar el rectángulo en el renderer
    SDL_RenderFillRect(ren, &rect);

    // Presentar el contenido del renderer en la pantalla
    SDL_RenderPresent(ren);

    // Esperar 5 segundos
    SDL_Delay(5000);

    // Limpiar
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();

    return 0;
}
