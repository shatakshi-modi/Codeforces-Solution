#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    int arr[100];
    for(size_t i=1;i<=n;i++){
        cin>>k;
        arr[k]=i;
    }
    for(size_t i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}