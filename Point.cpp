#include "Point.h"

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

Point::Point(int x):Point(x, x){}
Point::Point():Point(0, 0){}

Point::Point(const Point& p):Point(p.x, p.y){}

Point Point::Addilo(const Point& p1, const Point& p2) {
	return Point(p1.x + p2.x, p1.y + p2.y);
}
Point Point::Sub(const Point& p1, const Point& p2) {
	return Point(p1.x - p2.x, p1.y - p2.y);
}
Point Point::Sub(const Point& p1, const Point& p2) {
	return Point(p1.x - p2.x, p1.y - p2.y);
}

