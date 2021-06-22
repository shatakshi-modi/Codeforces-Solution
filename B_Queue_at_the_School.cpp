#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[50]{""};
    int n, t;
    cin>>n>>t;
    cin>>str;
    while(t--){
        for(size_t i=0;i<strlen(str);i++){
            if(str[i]=='B'&& str[i+1]=='G'){
                char temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                i++;
            }
        }
    }
    cout<<str;

}
