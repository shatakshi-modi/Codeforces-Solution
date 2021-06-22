#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int peopleInside{0}, a, b,maxCapacity{0}; // a is exit, b is entry
    while(n--){
        cin>>a>>b;
        peopleInside=(peopleInside-a)+b;
        if (peopleInside>maxCapacity)
        {
            maxCapacity=peopleInside;
        }
        
    }
    cout<<maxCapacity;
}