#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "Character.hpp"
using namespace ariel;
namespace ariel
{
    class Ninja: public Character
    {
        protected:
            int _speed;

        public:
            Ninja(string name, Point location, int hitPoint, int speed);
            
            const int getSpeed() const;
            void setSpeed(int speed);

            void move(Character *other);
            void slash(Character *other);
            string print() const override;

    };
    
    class OldNinja: public Ninja
    {
        public:
            OldNinja(string name, Point location);
    };

    class TrainedNinja: public Ninja
    {
        public:
            TrainedNinja(string name, Point location);
    };

    class YoungNinja: public Ninja
    {
        public:
            YoungNinja(string name, Point location);
    };
}