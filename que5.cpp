#include <iostream>
using namespace std;

void display(int a = 10, int b = 20, int c = 30)
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main()
{
    int a, b, c;

    cout << "Enter value for a : ";
    cin >> a;

    cout << "Enter value for b : ";
    cin >> b;

    cout << "Enter value for c : ";
    cin >> c;

    cout << "\nFunction Call With User Values\n";
    display(a, b, c);

    cout << "\nFunction Call With Default Values\n";
    display();

    return 0;
}
