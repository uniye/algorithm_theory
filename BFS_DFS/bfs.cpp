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