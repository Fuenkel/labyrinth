#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player : public Entity
{
public:
    Player(double x, double y);
    ~Player();

    void Update(const double deltaTime);
    void Render(HWND hwnd, HDC hdc, const double interpolation) const;
private:

};
#endif