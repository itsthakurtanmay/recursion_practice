#include<bits/stdc++.h>
using namespace std;
//0 1 1 2 3 5 8 13 21 34 55 89;
void fibbonacciprint(int n) {
	int a = 0;
	int b = 1;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0 or i == 1) {
			cout << i << " ";
		}
		else {
			ans = a + b;
			cout << ans << " ";
			a = b;
			b = ans;
		}
	}
}
int main() {
	int n;
	cin >> n;
	fibbonacciprint(n);
	return 0;
}