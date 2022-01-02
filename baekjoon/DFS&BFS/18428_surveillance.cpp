#include <stdio.h>
#include <queue>
using namespace std;
int n, tCnt, ans;
struct Point {
	int r, c;
}teachList[9];
char map[7][7];
int dr[] = { -1,0,1,0 };
int dc[] = { 0,-1,0,1 };
int search() {
	for (int i = 0; i < tCnt; i++) {
		Point now = teachList[i];
		for (int k = 0; k < 4; k++) {
			int nr = now.r + dr[k];
			int nc = now.c + dc[k];
			while (0 <= nr && nr < n && 0 <= nc && nc < n) {
				if (map[nr][nc] == 'S') return 0;
				else if (map[nr][nc] == 'O' || map[nr][nc]== 'T') break;
				nr += dr[k];
				nc += dc[k];
			}
		}
	}
	return 1;
}
void go(int r, int c, int depth) {
	if (ans) return;
	if (depth == 3) {
		/*for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%c", map[i][j]);
			}
			printf("\n");
		}
		printf("\n");*/
		if (search()) ans = 1;
		return;
	}
	int j = c;
	for (int i = r; i < n; i++) {
		for (; j < n; j++) {
			if (map[i][j] == 'X') {
				map[i][j] = 'O';
				go(i, j + 1, depth + 1);
				map[i][j] = 'X';
			}
		}
		j = 0;
	}
}
int main() {
	scanf("%d", &n);
	int noStu = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf(" %c", &map[i][j]);
			//printf("%c\n", map[i][j]);
			if (map[i][j] == 'T') {
				teachList[tCnt].r = i;
				teachList[tCnt++].c = j;
			}
			else if (map[i][j] == 'S') noStu++;
		}
	}
	go(0, 0, 0);
	if (noStu == 0) {
		printf("NO\n");
		return 0;
	}
	if (ans) printf("YES\n");
	else printf("NO\n");
	return 0;
}