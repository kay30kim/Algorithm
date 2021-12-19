#include <stdio.h>
#include <queue>
using namespace std;
int n, m;
int mapp[101][101];
int visited[101][101];
int dr[] = { -1,0,1,0 };
int dc[] = { 0,-1,0,1 };
struct Point {
	int r, c;
};
void go() {
	queue<Point> q;
	q.push({ 0, 0 });
	visited[0][0] = 1;
	while (!q.empty()) {
		Point now = q.front();
		q.pop();
		for (register int k = 0; k < 4; k++) {
			int nr = now.r + dr[k];
			int nc = now.c + dc[k];
			if (mapp[nr][nc] == 1 && visited[nr][nc] == 0) {
				visited[nr][nc] = visited[now.r][now.c] + 1;
				q.push({ nr,nc });
			}
		}
	}
}
int main() {
	scanf("%d %d", &n, &m);
	for (register int i = 0; i < n; i++) {
		for (register int j = 0; j < m; j++) {
			scanf(" %1d", &mapp[i][j]);
		}
	}
	go();
	printf("%d\n", visited[n - 1][m - 1]);
	return 0;
}