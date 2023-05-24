- 정렬은 이미 컴퓨터 공학의 오래된 연구 분야로, 이미 아주 훌륭한 정렬 관련 라이브러리가 존재
- 기본 사용 방법
```
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
```
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(int a, int b){
  return a<b;
}
int main(){
  int a[10] ={9,3,5,4,1,10,8,6,7,2};
  sort(a, a+10, compare); // compare값에 따라 정렬함 //오름차순임
  return 0;
}
```
- 데이터를 묶어서 정렬하는 방법
  - 실무에서는 객체로 정리되어 내부적으로 여러 개의 변수를 포함.
```
#include <iostream>
#include <algorithm>
using namespace std;
class Student{
  public:
    string name;
    int score;
    Student(string name, int score){
      this->name=name;
      this->score=score;
    }
    bool operator<(Student &student){
      return this-> score < student.score;
    }
}
bool compare(int a, int b){
  return a<b;
}
int main(){
  Student students[] ={
    student("김김",90),
    student("박박",80),
    student("오오",88),
    student("이이",99),
    student("나나",95)
  sort(a, a+10, compare); // compare값에 따라 정렬함 //오름차순임
  return 0;
}
```
-
