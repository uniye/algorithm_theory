#include <iostream>

using namespace std;

//피보나치
//시간복잡도 - O(n)
long long d[100];

long long dp(int x) {
	if (x == 1) return 1;
	if (x == 2) return 1;
	if (d[x] != 0) return d[x];
	return d[x] = dp(x - 1) + dp(x - 2); //기록할 수 있도록
}

int main() {
	cout << dp(50);
	return 0;
}

