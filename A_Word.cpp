#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[100]={""};
    cin>>str;
    int capitalLetter{0};
    for (int i=0; i<strlen(str); i++){
        if((int)str[i]==toupper(str[i])){
            capitalLetter++;
        }
    }
    for (int i=0; i<strlen(str); i++){
        if(capitalLetter<=(strlen(str)/2)){
            cout<<(char)towlower(str[i]);
        }
        else{
            cout<<(char)towupper(str[i]);
        }
    }
}