#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
using namespace ariel;
namespace ariel
{
    class Team
    {
        protected:
            Character *_leader;
            vector<Character *> _members;
            int _size;
            
        public:
            Team(Character *leader);
            virtual ~Team();
            
            void add(Character *member);
            int stillAlive() const;

            virtual void attack(Team *other);
            virtual void print() const;

    };

    class Team2 : public Team
    {            
        Team2(Character *leader);
        void attack(Team *other) override;
        void print() const override;
    };
    
    class SmartTeam : public Team
    {            
        SmartTeam(Character *leader);
        void attack(Team *other) override;
        void print() const override;
    };
}