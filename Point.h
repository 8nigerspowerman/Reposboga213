#pragma once
class Point
{
public:
	int x;
	int y;
	Point();
	explicit Point(int x);
	explicit Point(int x, int y);
	Point(const Point& p);

	int X() const;
	int Y() const;

	static Point Addilo(const Point& p1, const Point& p2);
	static Point Sub(const Point& p1, const Point& p2);
	static Point Mul(const Point& p1, const Point& p2);
	static Point Div(const Point& p1, const Point& p2);
	static Point Show(const Point& p);

	friend Point operator+(const Point& p1, const Point& p2);
	friend Point operator-(const Point& p1, const Point& p2);
	friend Point operator*(const Point& p1, const Point& p2);
	friend Point operator/(const Point& p1, const Point& p2);
	friend Point operator<<(const Point& p1, const Point& p2);
};

