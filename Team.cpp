#include <iostream>
using namespace std;
int main()
{
	short n, count{0},p1, p2, p3;
	cin >> n;
	if (n >= 1 && n <= 1000) {
		while (n--) {
			cin>>p1>>p2>>p3;
			if (p1 == 1 && p2 == 1 || p2 == 1 && p3 == 1
				|| p1 == 1 && p3 == 1) {
				count++;
			}
			else if (p1 == 1 && p2 == 1 && p3 == 1) {
				count++;
			}
		}
		cout << count;
	}
}
