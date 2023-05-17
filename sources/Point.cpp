#include "Point.hpp"

using namespace std;
using namespace ariel;

Point::Point() : _x(0.0), _y(0.0)
{

}

Point::Point(double x, double y) : _x(x), _y(y)
{
    
}

double Point::getX() const
{
    return 0;    
}

double Point::getY() const
{
    return 0;
}

double Point::distance(Point other) const
{
    return 0;
}

string Point::print() const
{
    return "";
}

const Point &Point::moveTowards(const Point &current, const Point &other, const double distanse)
{
    return other;
}