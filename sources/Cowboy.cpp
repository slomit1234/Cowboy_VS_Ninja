#include "Cowboy.hpp"

using namespace std;
using namespace ariel;

Cowboy::Cowboy(string name, Point location) : Character(name, location,10)
{

}

void Cowboy::shoot(Character *other)
{
    return;
}

bool Cowboy::hasBullets() const
{
    return true;
}

void Cowboy::reload()
{
    return;
}

string Cowboy::print() const
{
    return "";
}