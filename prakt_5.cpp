#include <iostream>
#include "time_utils.h"
using namespace std;
int entrySeconds()
{
    int seconds;
    while (true)
    {
        cout << "Seconds (0-59)" << endl;
        cin >> seconds;
        if (seconds >= 0 && seconds<=59)
        {
            break;
        }
        else
        {
            cout<<"Error. Repeat input"<< endl;
        }
    }
    return seconds;
}
int entryMinutes()
{
    int minutes;
    while (true)
    {
        cout << "Minutes (0-59)" << endl;
        cin >> minutes;
        if (minutes >= 0 && minutes <= 59)
        {
            break;
        }
        else
        {
            cout << "Error. Repeat input" << endl;
        }
    }
    return minutes;
}
int entryHour()
{
    int hour;
    while (true)
    {
        cout << "Hour (0-23)" << endl;
        cin >> hour;
        if (hour >= 0 && hour <= 23)
        {
            break;
        }
        else
        {
            cout << "Error. Repeat input" << endl;
        }
    }
    return hour;
}
int main()
{
    Time time;
    time.hours = entryHour();
    time.minutes = entryMinutes();
    time.seconds = entrySeconds();
    Time previousTime = getPreviousMinute(time);
    cout << "overload 1" << endl;
    cout << previousTime.hours << ":" << previousTime.minutes << ":" << previousTime.seconds << endl;


    Time previousTime2 = getPreviousMinute(entryHour(), entryMinutes(), entrySeconds());
    cout << "overload 2" << endl;
    cout << previousTime2.hours << ":" << previousTime2.minutes << ":" << previousTime2.seconds << endl;

    Time previousTime3 = getPreviousMinute(entryHour(), entryMinutes(), entrySeconds());
    cout << "overload 3" << endl;
    cout << previousTime3.hours << ":" << previousTime3.minutes << ":" << previousTime3.seconds << endl;
}

