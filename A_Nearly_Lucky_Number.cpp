#include<iostream>
using namespace std;

int main()
{
    long long int number;
    cin>>number;
    int count{0};
    while(number>0)
    {
        if(number%10==4 || number%10==7 )
            count++;
        number=number/10;
    }
    if(count==4 || count==7)
        cout<<"YES"; 
    else
        cout<<"NO";
}