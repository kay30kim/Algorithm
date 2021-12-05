#include <stdio.h>
#include <iostream>
using namespace std;
class Solution {
private:
	int n, ans, cnt;
	int check_row[16];
	int check_col[16];
	int check_dae[32];
	int check_dae2[32];
public:
	Solution(int N) {
		n = N; ans = 0; cnt = 0;
		for (int i = 0; i < n; i++) {
			check_row[i] = 0;
			check_col[i] = 0;
		}
		for (int i = 0; i < 2 * n; i++) {
			check_dae[i] = 0;
			check_dae2[i] = 0;
		}
	}
	void print() {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (check_row[i] == 1 && check_col[j] == 1 && check_dae[i - j + n] == 1 && check_dae2[i + j] == 1) {
					printf("1 ");
				}
				else {
					printf("0 ");
				}
			}
			printf("\n");
		}
		printf("\nans = %d\n\n", ans);
	}
	void dfs(int depth) {
		cnt++;
		if (depth == n) {
			ans++;
		}
		for (int j=0; j < n; j++) {
			if (check_col[j] == 0 && check_dae[depth - j + n] == 0 && check_dae2[depth + j] == 0) {
				go(depth, j);
				dfs(depth + 1);
				ungo(depth, j);
			}
		}
	}
	void solve(int r, int c, int depth) {
		cnt++;
		if (depth == n) {
			//printf("ans증가++\n\n");
			//print();
			ans++;
		}
		for (int i =0 ; i < n; i++) {
			for (int j = 0; j < n; j++) {
				//printf("현재 %d,%d\n", i, j);
				if (check_row[i] == 0 && check_col[j] == 0 && check_dae[i - j + n] == 0 && check_dae2[i + j] == 0) {
					go(i, j);
					solve(i, j, depth + 1);
					ungo(i, j);
				}
			}
		}
	}
	void go(int r, int c) {
		check_row[r] = 1;
		check_col[c] = 1;
		check_dae[r - c + n] = 1;
		check_dae2[r + c] = 1;
	}
	void ungo(int r, int c) {
		check_row[r] = 0;
		check_col[c] = 0;
		check_dae[r - c + n] = 0;
		check_dae2[r + c] = 0;
	}
	int getAns() {
		return ans;
	}
	int getCnt() {
		return cnt;
	}
};
int main() {
	int n;
	scanf("%d", &n);
	Solution s(n), s2(n);
	s.dfs(0);
	s2.solve(0, 0, 0);
	printf("함수 호출 횟수 : %d   답 : %d\n", s2.getCnt(), s2.getAns());
	printf("함수 호출 횟수 : %d   답 : %d\n", s.getCnt(), s.getAns());
	return 0;
}