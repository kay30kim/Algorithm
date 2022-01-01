#include <stdio.h>
#include <algorithm>
const int row = 100, col = 100;
int mapp[row + 1][col + 1];
int visited[row + 1][col + 1];
int ans[row*col], sum, cnt;
int dr[] = { -1, 0, 1, 0 };
int dc[] = { 0,-1,0,1 };
using namespace std;
void go(int r, int c, int num, int now) {
	for (register int k = 0; k < 4; k++) {
		int nr = r + dr[k];
		int nc = c + dc[k];
		if (0 > nr || nr >= row || 0 > nc || nc >= col) continue;
		if (mapp[nr][nc] == 9) continue;
		if (visited[nr][nc] != now && mapp[nr][nc]>=mapp[r][c]) {
			visited[nr][nc] = now;
			go(nr, nc, num, now);
			sum++;
		}
	}
}
bool check(int r, int c) {
	for (register int k = 0; k < 4; k++) {
		int nr = r + dr[k];
		int nc = c + dc[k];
		if (0 > nr || nr >= row || 0 > nc || nc >= col) continue;
		if (mapp[nr][nc] <= mapp[r][c]) return false;
	}
	return true;
}
int main() {
	int now = 1;
	cnt = 0;
	for (register int i = 0; i < row; i++) {
		for (register int j = 0; j < col; j++) {
			scanf(" %1d", &mapp[i][j]);
		}
	}
	printf("\n");
	for (register int i = 0; i < row; i++) {
		for (register int j = 0; j < col; j++) {
			printf("%1d", mapp[i][j]);
		}
		printf("\n");
	}
	for (register int i = 0; i < row; i++) {
		for (register int j = 0; j < col; j++) {
			if (check(i, j)) {
				sum = 1;
				go(i, j, mapp[i][j], now);
				printf("%d %d %d\n", i, j, sum);
				ans[cnt++] = sum;
			}			
		}
	}
	sort(ans, ans+cnt);
	sum = 0;
	//for (int i = 0; i < cnt; i++) printf("%d ", ans[i]);
	sum = ans[cnt - 1] * ans[cnt - 2] * ans[cnt - 3];
	printf("%d\n", sum);
}