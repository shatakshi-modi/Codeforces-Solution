#include <iostream>
using namespace std;

int main(){
    int t,i{0},count{0};
    string stone;
    cin>>t;
    cin>>stone;
    for (size_t i = 0; i <t ; i++){
        if(stone[i]=='R' || stone[i]=='B' ||stone[i]=='G' ){
             if(stone[i]==stone[i+1]){
                count++;
            }
        }
    }
    cout<<count;
}