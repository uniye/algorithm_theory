### BFS 정의
- 너비 우선 탐색(Breath First Serach)이란 탐색을 할 때 너비를 우선으로 하여 탐색을 수행하는 탐색 알고리즘
- "맹목적인 탐색"을 하고자 할 때 사용
- "최단 경로"를 찾아줌

### 작동방법
- 시작 노드를 큐에 삽입하며 시작.
- 방문처리
1. 큐에서 하나의 노드를 꺼냄
2. 해당 노드에 연결된 노드 중 방문하지 않은 노드 방문, 차례대로 큐에 삽입
- 1,2번 반복

### 원리
- 1부터 "가까운" 노드부터 탐색이 이루어짐

### 코드
```cpp
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7; //원소
int c[7]; //방문체크(check)
vector<int> a[8]; //인덱스 1부터 처리해주기 위해

void bfs(int start) {
	queue<int> q;
	q.push(start); //시작점을 넣음
	c[start] = true;
	while (!q.empty()) { //큐가 빌때까지 반복
		int x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 0; i < a[x].size(); i++) //q에서 꺼낸 노드와 인접 노드에
		{
			int y = a[x][i]; //a[노드][인접노드]
			if (!c[y]) { //방문 상태가 아니라면
				q.push(y);
				c[y] = true; //방문 상태로 변경
			}
		}
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

	bfs(1);

	return 0;
}
```

### 주의사항
- 특성이 중요한 것이고, 다른 알고리즘에 적용한다는 것이 핵심
- 그 자체로는 큰 의미가 없음

- [공부영상](https://www.youtube.com/watch?v=66ZKz-FktXo&list=PLRx0vPvlEmdDHxCvAQS1_6XV4deOwfVrz&index=16)
- [dfs bfs 차이점과 언제 사용하는지]()
