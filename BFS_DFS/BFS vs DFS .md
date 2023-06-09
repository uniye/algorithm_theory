![DFS_BFS](https://github.com/uniye/algorithm_theory/assets/92070609/61075627-0aa1-4a4f-8370-763547b9686f)
[이미지출처](https://iancoding.tistory.com/329)

## 차이점
- [DFS(깊이 우선 탐색)](https://github.com/uniye/algorithm_theory/blob/main/BFS_DFS/DepthFisrtSearch.md)
  - 모든 노드를 방문하고자 할 때
  - 구현 난이도: 상대적 쉬움
  - 검색 속도: 상대적 느림
  - ex) 모든 친구관계를 다 살펴볼때
  - stack, recursive function을 사용
  - 경로의 특징을 가질 수 있음

- [BFS(너비 우선 탐색)](https://github.com/uniye/algorithm_theory/blob/main/BFS_DFS/BreathFirstSearch.md)
  - 최단 경로를 찾고 싶을 때
  - 구현 난이도: 상대적 어려움
  - 검색 속도: 상대적 빠름
  - ex) 자신과 가까운 관계부터 탐색
  - queue를 사용
  - 경로의 특징을 가질 수 없음

## 시간복잡도
- 모든 노드를 검색한다는 점에서 시간 복잡도는 동일함.
- 방문한 노드인가? 시간 + 노드 방문 시간

## 문제 유형
- 그래프의 모든 정점 방문: DFS, BFS 상관 없음
- 경로의 특징 저장: DFS
- 최단거리: BFS
- 크기가 큰 그래프: DFS
- 규모 크지 않고 원하는 대상이 별로 안 먼 그래프: BFS
- [참고링크](https://stackoverflow.com/questions/3332947/what-are-the-practical-factors-to-consider-when-choosing-between-depth-first-sea)
