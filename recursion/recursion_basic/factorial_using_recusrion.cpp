#include<bits/stdc++.h>
using namespace std;

int  factorialof(int n) {
	if (n == 1) {
		return 1;
	}
	int ans = n * factorialof(n - 1);
	return ans;
}

int main() {
	int n;
	cin >> n;
	cout << factorialof(n);
	return 0;
}