#include "Physics.h"

PhysicsBody::PhysicsBody()
{
    x = 0.0f;
    y = 0.0f;

    velocityX = 0.0f;
    velocityY = 0.0f;

    gravity = 980.0f;
}

void PhysicsBody::Update(float deltaTime)
{
    velocityY += gravity * deltaTime;

    x += velocityX * deltaTime;
    y += velocityY * deltaTime;
}
