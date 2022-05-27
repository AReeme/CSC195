#include "Point.h"
#include <iostream>
#include <vector>

//typedef double currency;
using currency = double;
using namespace std;

//int max(int a, int b)
//{
//    return (a > b) ? a : b;
//}
//
//float max(float a, float b)
//{
//    return (a > b) ? a : b;
//}

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
T1 max(T1 a, T1 b)
{
    return (T1)((a > b) ? a : b);
}

template <typename T>
T sqr(T a)
{
    return a * a;
}

int main()
{
    currency total = 12.99f;
    cout << total << endl;

    //Template class
    ipoint point(10, 20);
    cout << point.x << endl;

    ipoint2 fpoint(23.4f, 12.5f);
    cout << fpoint.y << endl;

    ipoint p3;
    cout << p3.x << endl;

    //Template Functions
    cout << ::max<int>(20, 30) << endl;
    cout << ::max<float>(20.5f, 30.7f) << endl;
    cout << ::max(10.5, 3.7) << endl;
    cout << ::max(std::string("hello"), std::string("world")) << endl;
    cout << sqr(10) << endl;
    vector<float> numbers;

    const char* C = "Hello";
};

