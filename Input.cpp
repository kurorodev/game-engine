#include "Engine.h"
 
void Engine::input()
{
    // Обрабатываем нажатие Escape
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }
 
    // Обрабатываем нажатие клавиш движения
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Bob.moveLeft();
    }
    else
    {
        m_Bob.stopLeft();
    }
 
    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Bob.moveRight();
    }
    else
    {
        m_Bob.stopRight();
    }                       
 
}