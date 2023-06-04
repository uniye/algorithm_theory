## 정의
- 동적 계획 알고리즘이라고 부르기도 함
- 하나의 문제는 단 한 번만 풀도록 하는 알고리즘
- 분할 정복
  - 분할 정복 기법은 동일한 문제를 다시 풀음 (단점)
  - (단, 정렬과 같은 몇몇 요소에 대해선 단점이 없음. 퀵, 병합 정렬이 그 예)
  - 피보나치 수열에서 심각한 비효율성을 보임

## 사용 방법
- 다음 가정 하에 사용 가능
1. 큰 문제를 작은 문제로 분할 가능
2. 작은 문제에서 구한 정답은 그것을 포함하는 큰 문제에서도 동일하다.
- 메모이제이션 사용 => 미리 해결해두어 저장해둔 것.
- (tree모형 생각)밑에 있는 값부터 다 구해서 차례대로 위로 올라오면 계산.

## 코드 - 피보나치
```cpp
#include <iostream>

using namespace std;

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
```
- 이 상태로는 구할 값이 클 수록 시간이 엄청 많이 걸린다. 무려 O(2^n)
- 다음과 같이 만들면 시간 복잡도를 낮출 수 있다.
```cpp
#include <iostream>

using namespace std;

//시간복잡도 - O(n)
int d[100];

int dp(int x) {
	if (x == 1) return 1;
	if (x == 2) return 1;
	if (d[x] != 0) return d[x];
	return d[x] = dp(x - 1) + dp(x - 2); //기록할 수 있도록
}

int main() {
	cout << dp(30);
	return 0;
}
```
- O(n)으로 줄어든다.
- 그런데 dp(50)을 하면 음수가 나오는데, 이는 결과값이 너무 커서 오버플로우가 된 것이다.
- 해결방법: long long으로 자료형 변환
