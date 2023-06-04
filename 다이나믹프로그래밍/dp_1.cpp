#include <iostream>

using namespace std;

//피보나치
//시간복잡도 - O(2^n)
 
int dp(int x) {
	if (x == 1) return 1;
	if (x == 2) return 1;
	return dp(x - 1) + dp(x - 2);
}

int main() {
	cout << dp(20);
	return 0;
}

