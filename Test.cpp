#include<iostream>
#include<stdexcept>
#include<cmath>
#include "doctest.h"
using namespace doctest;

#include "sources/Character.hpp"
#include "sources/Point.hpp"
#include "sources/Team.hpp"
using namespace ariel;

TEST_CASE("Point class")
{
    Point a(0,0);
    Point b(0,0.5);
    Point c(1,0);

    CHECK(a.distance(b) == 0.5);
    CHECK(a.distance(c) == 1);
    CHECK(a.distance(a) == 0);
    CHECK(b.distance(c) == sqrt(1.25));
    CHECK_NOTHROW(a.distance(a));
    CHECK_FALSE(a.distance(c));
}

TEST_CASE("Character, Cowboy, Ninja class")
{
    Point a(0,0);
    Point b(0,0.5);
    Point c(1,0);

    //creation and upercasting
    Cowboy Woodi("Woodi", a);
    Cowboy Jessie("Jessie", b);
    
    Character* Leonardo =  new Ninja("Leonardo", a, 10, 10);
    Ninja* Refael = new Ninja("Refael", a, 12, 12);
    Ninja* Michaelanjelo = new TrainedNinja("Michaelanjelo", a);
    OldNinja* Donatelo = new OldNinja("Donatelo", a);
    Ninja* Anon = new YoungNinja("Anon", a); 

    CHECK(Woodi.getName() == "Woodi");
    CHECK(Jessie.getLocation().getX() == 0);
    CHECK(Jessie.getLocation().getY() == 0.5);
    CHECK(Jessie.getLocation().getX() == Woodi.getLocation().getX());
    CHECK(Woodi.isAlive() == true);
    CHECK(Woodi.getHitPoint() == 10);
    
    CHECK(dynamic_cast<TrainedNinja*>(Michaelanjelo) != nullptr);
    CHECK(dynamic_cast<OldNinja*>(Donatelo) != nullptr);
    CHECK(dynamic_cast<Ninja*>(Anon) != nullptr);

    //other tests
    CHECK_FALSE(Michaelanjelo->getSpeed() == Anon->getSpeed());
    CHECK_FALSE(Donatelo->getSpeed() == Anon->getSpeed());
    CHECK(Michaelanjelo->getSpeed() > Donatelo->getSpeed());
    CHECK_FALSE(Leonardo->getHitPoint() == 10000);
    CHECK(Refael->isAlive());
    CHECK(Refael->distance(Michaelanjelo) == 0);

}