#include "Engine.h"
 
void Engine::draw()
{
    // Стираем предыдущий кадр
    m_Window.clear(Color::White);
 
    // Отрисовываем фон
    m_Window.draw(m_BackgroundSprite);
    m_Window.draw(m_Bob.getSprite());
 
    // Отображаем все, что нарисовали
    m_Window.display();
}