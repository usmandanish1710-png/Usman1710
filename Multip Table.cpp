#include<iostream>
using namespace std;

int main() 
{
    int n, i, N;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"\nEnter the range: ";
    cin>>N;
    for(i=1; i<=N; i++)
    {
        cout<<"\n"<<n<<" * "<<i<<" = "<<n*i;
    }
    return 0;
}