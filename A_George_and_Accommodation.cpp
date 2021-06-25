#include <iostream>
using namespace std;
int main(){
    int n,p,q,roomLeft{0};
    cin>>n;
    while(n--){
        cin>>p>>q;
        if(p<q){
            if((q-p)>=2)
                roomLeft++;
        }
    }
    cout<<roomLeft;
}