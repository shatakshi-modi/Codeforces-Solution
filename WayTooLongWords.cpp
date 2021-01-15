#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n, c{0};
    string str;
    cin >> n;
    while (c < n) {
        cin >> str;
        if (str.length() > 10) {
            int len = str.length();
            cout<<str.at(0)<<len-2<<str.at(len-1);
        }
        else {
            
            cout << str;
        }
        cout << "\n";
        c++;
    }
}

