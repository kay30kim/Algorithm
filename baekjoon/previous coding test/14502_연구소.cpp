#include <stdio.h>
#include <queue>
int n, m, ans, mapp[9][9], visited[9][9], num;
int dr[] = { -1,0,1,0 };
int dc[] = { 0,-1,0,1 };
using namespace std;
struct Point {
	int r, c;
};
int bfs() {	
	int cnt = 0;	
	queue<Point> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mapp[i][j] == 2) {
				q.push({ i,j });
				visited[i][j] = num;
			}
		}
	}
	
	while (!q.empty()) {
		Point now = q.front();
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nr = now.r + dr[k];
			int nc = now.c + dc[k];
			if (nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
			if (mapp[nr][nc] == 0 && visited[nr][nc]!=num) {
				q.push({ nr,nc });
				visited[nr][nc] = num;
			}
		}
	}
	
	// count
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//printf("%d", mapp[i][j]);
			if (mapp[i][j] == 0 && visited[i][j]!=num)
				cnt++;
		}
		//printf("\n");
	}
	//printf("\n");
	return cnt;
}
void go(int depth, int r, int c) {
	if (depth == 3) {
		num++;
		int nowCnt = bfs();
		if (nowCnt > ans) {
			ans = nowCnt;
		}
		return;
	}

	// 벽 세우기
	int j = c;
	for (int i = r; i < n; i++) {
		for (; j < m; j++) {
			if (mapp[i][j] == 0) {
				mapp[i][j] = 1;
				go(depth + 1,i,j+1); // recursive
				mapp[i][j] = 0;
			}
		}
		j = 0;
	}
}
int main() {
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &mapp[i][j]);
		}
	}
	go(0, 0, 0);
	printf("%d\n", ans);
	return 0;
}