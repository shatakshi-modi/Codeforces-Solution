#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string a;
    string b;
    cin>>a;
    cin>>b;
    reverse(b.begin(),b.end());
    if(a==b){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}