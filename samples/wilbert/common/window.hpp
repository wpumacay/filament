#pragma once

#include <string>

#include <SDL_video.h>


class Window {
public:
    Window(cosnt std::string& title, int width, int height);


private:
    SDL_Window* m_Window = nullptr;
};
