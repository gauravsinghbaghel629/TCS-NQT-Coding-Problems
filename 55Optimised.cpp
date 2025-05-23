#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 6, r = 4;
	int ans = 1;
	for (int i = n; i >= n - r + 1; i--) {
		ans *= i;
	}
	cout << ans;
}