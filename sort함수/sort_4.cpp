#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
	vector<pair<int, string>>v;
	v.push_back(pair<int, string>(90, "이힛")); //pair<first,second>
	v.push_back(pair<int, string>(87, "오르라민c"));
	v.push_back(pair<int, string>(98, "밥부"));
	v.push_back(pair<int, string>(92, "배고파"));
	v.push_back(pair<int, string>(80, "아핫"));
	
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' ';
	}
	return 0;
}