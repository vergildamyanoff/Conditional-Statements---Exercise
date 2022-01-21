#include <iostream>
using namespace std;

int main()
{
    int timeFirst, timeSecond, timeThird;
    cin >> timeFirst >> timeSecond >> timeThird;

    int sumSeconds = timeFirst + timeSecond + timeThird;
    int minutes = sumSeconds / 60;
    int seconds = sumSeconds % 60;

    if (seconds < 10)
    {
        cout << minutes << ":0" << seconds << endl;
    }
    else
    {
        cout << minutes << ":" << seconds << endl;
    }
    return 0;
}
