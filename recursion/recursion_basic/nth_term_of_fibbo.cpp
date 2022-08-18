#include<bits/stdc++.h>
using namespace std;
//0 1 1 2 3 5 8 13 21 34 55 89;
int fibbonacci(int n) {
	int a = 0;
	int b = 1;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0 or i == 1) {
			ans = ans + i;
		}
		else {
			ans = a + b;
			a = b;
			b = ans;
		}
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	cout << fibbonacci(n);
	return 0;
}