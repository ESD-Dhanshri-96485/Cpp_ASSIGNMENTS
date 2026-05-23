#include <iostream>
using namespace std;

struct Time
{
    int hr;
    int min;
    int sec;
};

void initTime(Time &t)
{
    t.hr = 0;
    t.min = 0;
    t.sec = 0;
}

void acceptTime(Time &t)
{
    cout << "Enter Hours : ";
    cin >> t.hr;

    cout << "Enter Minutes : ";
    cin >> t.min;

    cout << "Enter Seconds : ";
    cin >> t.sec;
}

void displayTime(Time t)
{
    cout << "Time = " << t.hr << ":" << t.min << ":" << t.sec << endl;
}

void incrementTimeBy1Min(Time &t)
{
    t.min++;

    if(t.min == 60)
    {
        t.min = 0;
        t.hr++;

        if(t.hr == 24)
        {
            t.hr = 0;
        }
    }
}

int main()
{
    Time t;
    int choice;

    initTime(t);

    do
    {
        cout << "\n1.Accept Time";
        cout << "\n2.Display Time";
        cout << "\n3.Increment Time By 1 Minute";
        cout << "\n0.Exit";
        cout << "\nEnter Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                acceptTime(t);
                break;

            case 2:
                displayTime(t);
                break;

            case 3:
                incrementTimeBy1Min(t);
                cout << "Time Updated Successfully\n";
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 0);

    return 0;
}
