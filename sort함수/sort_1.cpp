#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a, a + 10); // sort(탐색할 시작위치, 탐색할 끝위치)
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}