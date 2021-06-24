#include <iostream>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int arr[1000];
    int ans{0};
    for(size_t i=0;i<n;i++){
        cin>>arr[i];
    }
    for(size_t i=0;i<n;i++){
        if(arr[i]>h){
            ans+=2;
        }
        else{
            ans+=1;
        }
    }
    cout<<ans;
}