#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int year;
    cin>>year;
    while(year){
        year++;
        string yearString =to_string(year);
        set<char> yearSet(yearString.begin(),yearString.end());
        if(yearString.size()==yearSet.size()){
            break;
        }
    }
    cout<<year;
}