#include <iostream>

using namespace std;

int add(int i1, int i2)
{
	return i1 + i2;
}

float add(float f1, float f2)
{
	return f1 + f2;
}

struct Point
{
	float x = 0;
	float y = 0;

	Point() {}
	Point(float x, float y) : x { x }, y { y } {}

	void Add(Point p)
	{
		x += p.x;
		y += p.y;
	}

	void Print()
	{
		cout << x << " " << y << endl;
	}
};

Point operator + (Point p1, Point p2)
{
	Point result;
	result.x = p1.x + p2.x;
	result.y = p1.y + p2.y;

	return result;
}

Point operator - (Point p1, Point p2)
{
	Point result;
	result.x = p1.x - p2.x;
	result.y = p1.y - p2.y;

	return result;
}

bool operator < (Point p1, Point p2)
{
	return p1.x < p2.x && p1.y < p2.y;
}

int main()
{
	//cout << add(12, 34) << endl;
	//cout << add(3.4f, 4.4f) << endl;

	Point p1(8.3f, 2.5f);
	Point p2(5.3f, 3.3f);

	p1.Add(p2);

	Point p3 = p1 + p2;
	p3.Print();

	cout << (p1 < p2) << endl;
}

