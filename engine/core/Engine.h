#pragma once

class Engine
{
public:
    bool Init();
    void Run();
    void Shutdown();

    bool Running() const;

private:
    bool running;
};
