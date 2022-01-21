#include <iostream>
using namespace std;

int main()
{
	double tripPrice;
	int puzzels, dolls, bears, minions, trucks;
	cin >> tripPrice >> puzzels >> dolls >> bears >> minions >> trucks;

	int allToys = puzzels + dolls + bears + minions + trucks;

	double puzzelsPrice = puzzels * 2.60, dollsPrice = dolls * 3, bearsPrice = bears * 4.10, minionPrice = minions * 8.20, truckPrice = trucks * 2;

	double allSells = puzzelsPrice + dollsPrice + bearsPrice + minionPrice + truckPrice;

	if (allToys >=50)
	{
		allSells -= allSells * 0.25;
	}
	allSells -= allSells * 0.1;

	double difference = tripPrice - allSells;
	
	cout.setf(ios::fixed);
	cout.precision(2);


	if (difference > 0)
	{
		cout << "Not enough money! " << difference << " lv needed." << endl;
	}
	else 
	{
		cout << "Yes! " << abs(difference) << " lv left." << endl;
	}

	return 0;
}

