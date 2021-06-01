#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(size_t i=0;i<s.length();i++){
        if(i==0){
            s[i]=toupper(s[i]);
        }
        else{
            s[i]=s[i];
        }
    }
    cout<<s;
    return 0;
}