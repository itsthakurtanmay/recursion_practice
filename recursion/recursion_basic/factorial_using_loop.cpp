//5!= 5*4*3*2*1
#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
	int prod = 1;
	for (int i = n; i >= 1; i--) {
		prod = prod * i;
	}
	return prod;
}
int main() {
	int n;
	cin >> n;
	cout << factorial(n);
	return 0;
}