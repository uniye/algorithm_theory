- 정렬은 이미 컴퓨터 공학의 오래된 연구 분야로, 이미 아주 훌륭한 정렬 관련 라이브러리가 존재
- 기본 사용 방법
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int a[10] ={9,3,5,4,1,10,8,6,7,2};
  sort(a, a+10); // sort(탐색할 시작위치, 탐색할 끝위치)
  return 0;
}
```
- sort()함수가 강력한 이유: 정렬할 기준을 개발자 마음대로 정할 수 있다.
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b) {
	return a > b; //내림차순
}
int main() {
	int a[10] = { 9,3,5,4,1,10,8,6,7,2 };
	sort(a, a + 10, compare); // compare값에 따라 정렬함 
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
```
- 데이터를 묶어서 정렬하는 방법
  - 실무에서는 객체로 정리되어 내부적으로 여러 개의 변수를 포함.
  - 단순 데이터정렬 기법은 실무에서 사용하기에 적합하지 않다.
  - 특정한 변수를 기준으로 정렬하는 것이 가장 중요하다.
```cpp
#include <iostream>
#include <algorithm>
using namespace std;
class Student {
public:
    string name;
    int score;
    Student(string name, int score) { //생성자: 초기화
        this->name = name;
        this->score = score;
    }
    bool operator<(Student& student) { //점수가 작은 순부터 출력
        return this->score < student.score;
    }
};


int main() {
    Student students[] = {
      Student("김김",90),
      Student("박박",80),
      Student("오오",88),
      Student("이이",99),
      Student("나나",95)
    };
    sort(students, students + 5); // operater기능을 넣어놨기에 따로 기준을 안 적어도 됌
    for (int i = 0; i < 5; i++) {
        cout << students[i].name << "  ";
    }
    return 0;
}
```
- 프로그래밍 대회
  - 빠른 개발 필요 => 페어(pair)라이브러리를 사용
```cpp
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
```
  - 숏코딩: 시간복잡도가 동일하다면 소스코드가 짧을 수록 남들보다 앞서있슴
  - 벡터: 배열을 사용하기 쉽게 개편한 자료구조임.
  - 페어: 한쌍의 데이터를 처리
  - 변수가 3개일때 두개의 변수를 기준으로 정렬하는 방법

<학생을 나타낼 수 있는 정보가 이름, 성적, 생년월일일 때 학생을 성적 순으로 나열, 다만성적이 동일한 경우 나이가 더 어린 학생이 더 우선순위가 높다.>
```cpp
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
```

