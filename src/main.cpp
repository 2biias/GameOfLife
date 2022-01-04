#include <gameOfLife/application.hpp>

int main()
{
    auto app = GameOfLife::Application(CELLSPRAXIS, 15);
    app.start();
}