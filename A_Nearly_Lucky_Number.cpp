#include <iostream>
using namespace std;

int main(){
    long long int luckyNumber;
    int n{0};
    cin>>luckyNumber;
    bool flag{0};
    if(luckyNumber/10==0){
        flag=1;
    }
    else{
        while(luckyNumber!=0){
        n=luckyNumber%10;
        luckyNumber/=10;
        if(n==4){
            flag=0;
        }
        else if(n==7){
            flag=0;
        }
        else{
            flag=1;
            break;
        }
     }
    }
   
    if(flag==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}