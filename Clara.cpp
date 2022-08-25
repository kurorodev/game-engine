#include "Clara.h"

Clara::Clara()
{
    // Вписываем в переменную скорость Боба
    m_Speed = 400;

    // Связываем текстуру и спрайт
    m_Texture.loadFromFile("images/bob.png");
    m_Sprite.setTexture(m_Texture);

    // Устанавливаем начальную позицию Боба в пикселях
    m_Position.x = 500;
    m_Position.y = 800;
}

// Делаем приватный спрайт доступным для функции draw()
Sprite Clara::getSprite()
{
    return m_Sprite;
}
 
void Clara::moveLeft()
{
    m_LeftPressed = true;
}
 
void Clara::moveRight()
{
    m_RightPressed = true;
}
 
void Clara::stopLeft()
{
    m_LeftPressed = false;
}
 
void Clara::stopRight()
{
    m_RightPressed = false;
}

// Двигаем Боба на основании пользовательского ввода в этом кадре,
// прошедшего времени и скорости
void Clara::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        m_Position.x += m_Speed * elapsedTime;
    }
 
    if (m_LeftPressed)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }
 
    // Теперь сдвигаем спрайт на новую позицию
    m_Sprite.setPosition(m_Position);   
 
}