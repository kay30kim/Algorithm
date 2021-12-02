#include <iostream>
#include <stdio.h>
using namespace std;
class Solution {
private:
	int dr[3] = { -1,1,0 };
	int dc[3] = { 0,0,1 };
	int nowR, nowC, value;
public:
	Solution() {
		nowR = 0;
		nowC = 0;
		value = 0;
	}
	void move(int idx, int num) {
		value += dr[idx]*num;
		nowC += dc[idx]*num;
		if (nowR < 0) nowR = 0;
	}
	void mul(int num) {
		nowR += (value * num);
	}
	int getC() {
		return nowC;
	}
	int getR() {
		return nowR;
	}
};

int main() {
	Solution sol;
	char str[6];
	int n=0;
	while (!cin.eof()) {    //EOF를 만날때까지 무한 입력
		cin >> str >> n;
		if (n == -1) break;
		if (str[0] == 'u') {
			sol.move(0, n);
		}
		else if (str[0] == 'd') {
			sol.move(1, n);
		}
		else {
			sol.move(2, n);
			sol.mul(n);
		}
		printf("%d %d\n", sol.getC(), sol.getR());
	}
	printf("%d\n", sol.getC()*sol.getR());
	printf("dd\n");
	return 0;
}