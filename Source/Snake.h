#pragma once

#include <iostream>

struct Node
{
    int DirX;
    int DirY;
    Node* Next;
};

class Snake
{
public:
    Node* Head; 
    char SnakeMovement; 

    Snake(int X, int Y);

/*Function Prototypes*/

/**Move()
 * - This will direct snake to move in a certain direction 
 * - one segment at a time ("U" - Upper, "D" - Down, "L" - Left, "R" - Right)
 */
    void Move();

/**EatAndGrow()
 * - Eat the food that pops up on the grid
 * - Grow the snake from the tail end 
 */
    void EatAndGrow();

/**CheckCollision() 
 * - To check whether snake has hit a wall or itself
 * - returns True if collided, otherwise False
 */
    bool CheckCollision();

};