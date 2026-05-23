#include <iostream>
using namespace std;

inline float areaTriangle(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    float base, height, area;

    cout << "Enter Base : ";
    cin >> base;

    cout << "Enter Height : ";
    cin >> height;

    area = areaTriangle(base, height);

    cout << "Area of Triangle = " << area << endl;

    return 0;
}
