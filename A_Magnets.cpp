#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100000];
    int grp{1};
    for(size_t i=0;i<n;i++){
        cin>>arr[i];
    }
    for(size_t i=1;i<n;i++){
        if(arr[i-1]!=arr[i]){
            grp++;
        }
    }
    cout<<grp;
}