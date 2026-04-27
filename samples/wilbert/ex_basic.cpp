
#include <SDL.h>

#include <filament/Engine.h>
#include <filament/Viewport.h>

static constexpr int WINDOW_WIDTH = 1024;
static constexpr int WINDOW_HEIGHT = 768;

struct Context {
    SDL_Window* window = nullptr;

    filament::Engine::Config engine_cfg;

    filament::backend::Platform* platform = nullptr;
};

Context ctx;

auto main() -> int {
    uint32_t window_flags = SDL_WINDOW_SHOWN | SDL_WINDOW_ALLOW_HIGHDPI | SDL_WINDOW_RESIZABLE;

    const int x = SDL_WINDOWPOS_CENTERED;
    const int y = SDL_WINDOWPOS_CENTERED;

    ctx.window = SDL_CreateWindow("Ex-Basic", x, y, WINDOW_WIDTH, WINDOW_HEIGHT, window_flags);


    return 0;
}
