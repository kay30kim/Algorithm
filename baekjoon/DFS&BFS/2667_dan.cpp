#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;
int n, mapp[26][26], visited[26][26];
int dr[] = { -1,0,1,0 };
int dc[] = { 0,-1,0,1 };
int arr[26 * 26];
struct Point {
	int r, c;
};
int bfs(int i, int j) {
	int cnt = 0;
	queue<Point> q;
	q.push({ i,j });
	visited[i][j] = 1;
	while (!q.empty()) {
		Point now = q.front();
		q.pop();
		cnt++;
		for (int k = 0; k < 4; k++) {
			int nr = now.r + dr[k];
			int nc = now.c + dc[k];
			if (mapp[nr][nc] == 1 && visited[nr][nc] == 0) {
				visited[nr][nc] = 1;
				q.push({ nr,nc });
			}
		}
	}
	return cnt;
}
int main() {
	int ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf(" %1d", &mapp[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mapp[i][j] == 1 && visited[i][j] == 0) {
				arr[ans++] = bfs(i, j);
			}
		}
	}
	printf("%d\n", ans);
	sort(arr, arr+(26*26), greater<int>());
	for (int k = ans-1; k >= 0; k--) {
		printf("%d\n", arr[k]);
	}
	return 0;
}
