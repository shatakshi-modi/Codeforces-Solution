#include <iostream>
using namespace std;

int main(){
    int n,countA{0},countD{0};
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            countA++;
        }
        else{
            countD++;
        }
    }
    if(countD==countA){
        cout<<"Friendship";
        return 0;
    }
    cout<<(countA>countD?"Anton":"Danik");
}