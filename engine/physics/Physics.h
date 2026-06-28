#pragma once

class PhysicsBody
{
public:
    float x;
    float y;

    float velocityX;
    float velocityY;

    float gravity;

    PhysicsBody();

    void Update(float deltaTime);
};
