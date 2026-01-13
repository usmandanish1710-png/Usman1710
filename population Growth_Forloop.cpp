#include <iostream>
using namespace std;

int main()
{
    int popA, popB, years;
    float rateA, rateB;

    cout << "Enter population of Town A: ";
    cin >> popA;
    cout << "Enter growth rate of Town A (%): ";
    cin >> rateA;

    cout << "Enter population of Town B: ";
    cin >> popB;
    cout << "Enter growth rate of Town B (%): ";
    cin >> rateB;

    for(years = 0; popA < popB; years++) 
    {
        popA += popA * (rateA / 100);
        popB += popB * (rateB / 100);
    }

    cout << "After " << years << " years:" << endl;
    cout << "Population of Town A: " << popA << endl;
    cout << "Population of Town B: " << popB << endl;

    return 0;
}
