// Candy bar sales - challenge
// Calculates Candy Bar Sales income.

#include <iostream>
using namespace std;

int main()
{
    double numSold, earningsPerBar, totalEarnings;

    // Get the number of candy bars sold.
    cout << "How many candy bars were sold? ";
    cin >> numSold;

    // Get the amount eared per bar sold.
    cout << "How much is earned for each bar sold? ";
    cin >> earningsPerBar;

    // Calculate the tolal earings.
    totalEarnings = numSold * earningsPerBar;

    // Display the Total earnings.
    cout << "You have earned $" << totalEarnings << endl;
    return 0; 
}
