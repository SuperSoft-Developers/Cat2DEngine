#pragma once

class Time
{
public:
    static void Update();
    static float DeltaTime();

private:
    static float deltaTime;
};
