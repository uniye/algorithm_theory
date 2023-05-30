### DFS 정의
- 스택(Stack)사용 : 스택을 사용하지 않아도 컴퓨터는 구조적으로 항상 스택의 원리 사용
- 재귀함수만 사용하여 구현할 수 있다
- 루트 노드에서 시작해서 다음 분기로 넘어가기 전에 해당 분기를 완벽하게 탐색하는 방식

### 작동방법
1. 스택의 최상단 노드 확인
2. 최상단 노드에 방문하지 않은 인접 노드가 있으면 그 노드를 스택에 넣고 방문 처리
3. 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 뺌
- 반복

### 코드
```cpp
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int number = 7; //원소
int c[7]; //방문체크(check)
vector<int> a[8]; //인덱스 1부터 처리해주기 위해

void dfs(int x) { //재귀함수 이용
	if (c[x]) return;
	c[x] = true;
	cout << x << ' ';
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		dfs(y);
	}
}

int main() {
	ios_base::sync_with_stdio(false);

	//간선으로 연결되어있는 형태 구현
	a[1].push_back(2);
	a[2].push_back(1);

	a[1].push_back(3);
	a[3].push_back(1);

	a[2].push_back(3);
	a[3].push_back(2);

	a[2].push_back(4);
	a[4].push_back(2);

	a[2].push_back(5);
	a[5].push_back(2);

	a[4].push_back(5);
	a[5].push_back(4);

	a[3].push_back(6);
	a[6].push_back(3);

	a[3].push_back(7);
	a[7].push_back(3);

	a[6].push_back(7);
	a[7].push_back(6);

	dfs(1);

	return 0;
}
```

### 주의사항
- dfs자체로는 큰 의미가 없다. 작동 원리에 대해서 빠삭하게 이해해야 함.

- [공부영상](https://www.youtube.com/watch?v=l0Rsu7dziws&list=PLRx0vPvlEmdDHxCvAQS1_6XV4deOwfVrz&index=17)
- [dfs bfs 차이점과 언제 사용하는지]()
