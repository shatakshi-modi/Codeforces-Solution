#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    if((str.length())%2==0){
        cout<<"CHAT WITH HER!";
        return 0;
    }
    else{
        sort(str.begin(), str.end());
        for (int i = 0; i < str.length()-1; i++) {
            if (str[i] == str[i + 1]) {
                cout<<"IGNORE HIM!";
                return 0;
            }
            else{
                cout<<"CHAT WITH HER!";
                return 0;
            }
        }
    }
    //
}