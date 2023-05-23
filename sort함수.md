- 정렬은 이미 컴퓨터 공학의 오래된 연구 분야로, 이미 아주 훌륭한 정렬 관련 라이브러리가 존재
- 기본 사용 방법
  #include <iostream>
  #include <algorithm>
  using namespace std;
  int main(){
  int a[10] ={9,3,5,4,1,10,8,6,7,2};
  sort(a, a+10); //
  return 0;
  }
