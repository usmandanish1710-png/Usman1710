#include<iostream>
using namespace std;

int main()
{
    int N, i, sum_even = 0, sum_odd = 0;
    cout<<"Enter the number of terms: ";
    cin>>N;
    for(i=1; i<=N; i++)
    {
        if(i%2==0)
            sum_even += i;
        else
            sum_odd += i;
    }
    cout<<"Sum of even numbers: "<<sum_even<<endl;
    cout<<"Sum of odd numbers: "<<sum_odd<<endl;
    return 0;
}