#include<iostream>
using namespace std;

int main() 
{
    float temperature, Sum, maxTemp;
    Sum = 0; // Setting to absolute zero as initial max temperature
    for(int i = 1; i <= 7; i++)
    {
        cout<<"Enter temperature for day "<<i<<": ";
        cin>>temperature;
        Sum += temperature;
        if(i == 1 || temperature > maxTemp)
        maxTemp = temperature;
    }
    cout<<"Average temperature: "<<Sum/7<<endl;
    
    cout<<"Maximum temperature: "<<maxTemp<<endl;
    return 0;
}