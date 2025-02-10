#include<iostream>

#include "Snake.h"

Snake::Snake(int X, int Y)
{
    Head = new Node(X, Y, nullptr);
    SnakeMovement = "R" //start with a move to right direction
}

void Snake::Move()
{

}

void Snake::EatAndGrow()
{

}

bool Snake::CheckCollision()
{
    return false;
}