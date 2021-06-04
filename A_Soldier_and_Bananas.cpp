#include <iostream>
using namespace std;

int main(){
    int k,n,w,total{0};
    cin>>k>>n>>w;
    cout<<max(0,(k*(w*(w+1))/2)-n);
}