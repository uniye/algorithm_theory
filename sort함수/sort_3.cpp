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