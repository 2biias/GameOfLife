#if !defined(GAMECONTROLLER_HPP)
#define GAMECONTROLLER_HPP

#include <iostream>
#include <SDL.h>

namespace GameEngine
{

#define GAME_TICK_MS 50

template<typename Engine>
class Controller
{
public:
    Controller(Engine& engine)
    :   engine_(engine)
    {}

    void run() {
        while(running_)
        {
            engine_.update();
            engine_.render();
            tick();
        }
    }

    void tick() { SDL_Delay(GAME_TICK_MS); }

    void stop() { running_ = false; }

private:
    bool running_ = true;
    Engine& engine_;
};

}
#endif // GAMECONTROLLER_HPP