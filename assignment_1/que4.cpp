#include <iostream>
using namespace std;

int Add(int a, int b, int c, int d)
{
    return a + b + c + d;
}

float Add(float a, float b, float c, float d)
{
    return a + b + c + d;
}

float Add(int a, int b, int c, float d)
{
    return a + b + c + d;
}

float Add(int a, int b, float c, float d)
{
    return a + b + c + d;
}

float Add(int a, float b, float c, float d)
{
    return a + b + c + d;
}

int main()
{
    cout << "4 int values = "
         << Add(10, 20, 30, 40) << endl;

    cout << "4 float values = "
         << Add(1.1f, 2.2f, 3.3f, 4.4f) << endl;

    cout << "3 int and 1 float = "
         << Add(10, 20, 30, 4.5f) << endl;

    cout << "2 int and 2 float = "
         << Add(10, 20, 3.5f, 4.5f) << endl;

    cout << "1 int and 3 float = "
         << Add(10, 2.5f, 3.5f, 4.5f) << endl;

    return 0;
}
