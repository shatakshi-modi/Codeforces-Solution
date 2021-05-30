#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
	int arr[5][5];
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5; j++) {
			if (arr[i][j] == 0 || arr[i][j] == 1) {
				if (arr[i][j] == 1) {
					int a = i - 2;
					int b = j - 2;
					int sum = abs(a)+abs(b);
					cout << sum<<"\n";
 
				}
			}
		}
	}
 
}