#include <stdio.h>
#include <queue>
using namespace std;
int N, M, V;
int mapp[1001][1001];
int visited[1001][2];
void dfs(int node) {
	printf("%d ", node);
	for (register int i = 1; i <= N; i++) {
		if (mapp[node][i] == 1 && visited[i][0] == 0) {
			visited[i][0] = 1;
			dfs(i);
		}
	}
}
void bfs(int node) {
	queue<int> q;
	q.push(node);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		printf("%d ", now);
		for (register int i = 1; i <= N; i++) {
			if (mapp[now][i] == 1 && visited[i][1] == 0) {
				visited[i][1] = 1;
				q.push(i);
			}
		}
	}
}
int main() {
	scanf("%d %d %d", &N, &M, &V);
	int s, f;
	for (register int i = 0; i < M; i++) {
		scanf("%d %d", &s, &f);
		mapp[s][f] = 1;
		mapp[f][s] = 1;
	}
	visited[V][0] = 1;
	dfs(V);
	printf("\n");
	visited[V][1] = 1;
	bfs(V);
	return 0;
}