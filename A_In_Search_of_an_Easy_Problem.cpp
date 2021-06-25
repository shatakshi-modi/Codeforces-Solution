#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i{0};
    bool ans,flag{0};
    while(cin>>ans){
        if(i<n){
            if(ans==1){
                flag=1;
                break;
            }
            i++;
        }
        else{
            break;
        }
    }
    if (flag==1)
    {
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    
}