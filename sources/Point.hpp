#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace ariel
{
    class Point
    {
        private:
            double _x;
            double _y;

        public:
            Point();
            Point(double x, double y);
            
            double getX() const;
            double getY() const;

            double distance(Point other) const;
            string print() const;
            static const Point &moveTowards(const Point &current, const Point &other, const double distanse);
    };
}