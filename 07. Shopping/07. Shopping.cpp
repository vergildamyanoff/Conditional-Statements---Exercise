#include <iostream>

using namespace std;

int main()
{
    double budget;
    int videoCards, processors, rams;

    cin >> budget >> videoCards >> processors >> rams;

    double videoCardsPrice = videoCards * 250;
    double processorsPrice = processors * videoCardsPrice * 0.35;
    double ramsPrice = rams * videoCardsPrice * 0.1;

    double  totalPrice = videoCardsPrice + processorsPrice + ramsPrice;

    if (videoCards > processors)
    {
        totalPrice -= (totalPrice * 0.15);
    }

    double difference = budget - totalPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (difference >= 0)
    {
        cout << "You have " << difference << " leva left!" << endl;
    }
    else
    {
        cout << "Not enough money! You need " << abs(difference) << " leva more!" << endl;
    }
}

