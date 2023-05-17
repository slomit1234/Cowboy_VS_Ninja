#include "Ninja.hpp"

using namespace std;
using namespace ariel;

Ninja::Ninja(string name, Point location, int hitPoint, int speed) : Character(name, location, hitPoint)
{
    _speed=speed;
}

const int Ninja::getSpeed() const
{
    return _speed;
}
void Ninja::setSpeed(int speed)
{
    return;
}

void Ninja::move(Character *other)
{
    return;
}

void Ninja::slash(Character *other)
{
    return;
}

string Ninja::print() const
{
    return "";
}

OldNinja::OldNinja(string name, Point location): Ninja(name, location, 140, 8)
{
    
}

TrainedNinja::TrainedNinja(string name, Point location): Ninja(name, location, 120, 12)
{
    
}

YoungNinja::YoungNinja(string name, Point location): Ninja(name, location, 100, 14)
{

}