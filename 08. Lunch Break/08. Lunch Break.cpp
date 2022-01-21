#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string seriesName;
	int episodeTime, breakTime;

	getline(cin, seriesName);
	cin >> episodeTime >> breakTime;

	double lunchTime = breakTime * 1 / 8.0;
	double restTime = breakTime * 1 / 4.0;

	double watchTime = breakTime - lunchTime - restTime;

	if (watchTime >= episodeTime)
	{
		double freeTime = ceil(watchTime - episodeTime);
		cout << "You have enough time to watch " << seriesName << " and left with " << freeTime << " minutes free time." << endl;
	}
	else
	{
		double neededTime = ceil(episodeTime - watchTime);
		cout << "You don't have enough time to watch " << seriesName << ", you need " << neededTime << " more minutes." << endl;
	}
}

