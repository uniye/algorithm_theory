#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<string, pair<int, int>>a, pair<string, pair<int, int>>b) {
	if (a.second.first == b.second.first) { //성적이 같으면 학번비교
		return a.second.second > b.second.second;
	}
	else {
		return a.second.first > b.second.first;
	}
}
int main(void) {
	vector<pair<string,pair<int, int>>>v; //이중 페어
	v.push_back(pair<string, pair<int, int>>("이힛",pair<int,int>(90,202025520))); //pair<first,second>
	v.push_back(pair<string, pair<int, int>>("오르라민c", pair<int, int>(80, 202025510)));
	v.push_back(pair<string, pair<int, int>>("밥부", pair<int, int>(92, 202025530)));
	v.push_back(pair<string, pair<int, int>>("배고파", pair<int, int>(85, 202025545)));
	v.push_back(pair < string, pair<int, int>>("아핫", pair<int, int>(92, 202025512)));

	sort(v.begin(), v.end(),compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' '; //이름 출력
	}
	return 0;
}