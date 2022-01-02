#include <stdio.h>
#include <queue>
using namespace std;
struct Point {
	int r, c, num;
	bool operator<(const Point p) const {
		return this->num > p.num;
	}
};
priority_queue<Point> pq1, pq2;
int map[201][201];
int dr[] = { -1,0,1,0 };
int dc[] = { 0,-1,0,1 };
int main() {
	int n, k, s, x, y;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &map[i][j]);
			if (map[i][j] != 0) {
				pq1.push({ i,j,map[i][j] });
			}
		}
	}
	scanf("%d %d %d", &s, &x, &y);
	int cnt = 0;
	while (s--) {
		if (cnt % 2 == 0) {
			while (!pq1.empty()) {
				Point now = pq1.top();
				pq1.pop();
				for (int i = 0; i < 4; i++) {
					int nr = now.r + dr[i];
					int nc = now.c + dc[i];
					if (nr < 0 || nr >= n || nc < 0 || nc >= n) continue;
					if (map[nr][nc] == 0) {
						map[nr][nc] = now.num;
						pq2.push({ nr,nc, now.num });
					}
				}
			}
		}
		else {
			while (!pq2.empty()) {
				Point now = pq2.top();
				pq2.pop();
				for (int i = 0; i < 4; i++) {
					int nr = now.r + dr[i];
					int nc = now.c + dc[i];
					if (nr < 0 || nr >= n || nc < 0 || nc >= n) continue;
					if (map[nr][nc] == 0) {
						map[nr][nc] = now.num;
						pq1.push({ nr,nc, now.num });
					}
				}
			}
		}
		cnt++;
	}
	/*printf("\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d", map[i][j]);
		}
		printf("\n");
	}*/
	printf("%d\n", map[x-1][y-1]);
	return 0;
}