#include "Team.hpp"

using namespace std;
using namespace ariel;

Team::Team(Character *leader) : _leader(leader)
{

}

Team::~Team()
{

}

void Team::add(Character *member)
{
    return;
}

int Team::stillAlive() const
{
    return 0;
}

void Team::attack(Team *other)
{
    return;
}
void Team::print() const
{
    return;
}

Team2::Team2(Character *leader) : Team(leader)
{

}

void Team2::attack(Team *other)
{
    return;
}

void Team2::print() const
{
    return;
}

SmartTeam::SmartTeam(Character *leader): Team(leader)
{

}

void SmartTeam::attack(Team *other)
{
    return;
}

void SmartTeam::print() const
{
    return;
}