#include "Character.hpp"

using namespace std;
using namespace ariel;

Character::Character(string name, Point& location, int hitPoint) : _name(name), _location(location), _hitPoints(hitPoint)
{

}

string Character::getName() const
{
    return "";
}

int Character::getHitPoint() const
{
    return 0;
}

const Point& Character::getLocation() const
{
    return _location;
}

void Character::setLocation(Point& location)
{
    return;    
}

bool Character::isAlive() const
{
    return true;
}

double Character::distance(Character *other) const
{
    return 0;
}

void Character::hit(int amount)
{
    return;
}