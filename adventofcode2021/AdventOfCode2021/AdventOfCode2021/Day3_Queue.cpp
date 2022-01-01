#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
const int len = 5;
class Solution {
private:
	int bits[len]; // This array indicates which is more 0 or 1 each row
	int arr[10000][len]; // This array has the total input
	int cnt;
	queue<char*> qOxy1, qOxy2, qCo1, qCo2;
public:
	Solution() {
		for (register int i = 0; i < len; i++) {
			bits[i] = 0;
		}
		for (register int i = 0; i < 10000; i++) {
			for (register int j = 0; j < len; j++) {
				arr[i][j] = 0;
			}
		}
		cnt = 0;
	}
	void addBits(char line[len]) {
		for (register int i = 0; line[i]; i++) {
			if (line[i] == '0') bits[i]--;
			else bits[i]++;
			arr[cnt][i] = line[i] - '0';
		}
		qOxy1.push(line);
		qCo1.push(line);
		cnt++;
	}
	void getOxyBits(int i) {
		bits[i]++; // if there are an equal numbers of 0 bits and 1 bits , set 1 bits.
		printf("%d번째\n", i);
		while (!qOxy1.empty()) {
			printf("%s ", qOxy1.front());
			if (qOxy1.front()[i] == '1') {
				bits[i]++;
			}
			else {
				bits[i]--;
			}
			qOxy2.push(qOxy1.front());
			qOxy1.pop();
		}
		while (!qOxy2.empty()) {
			qOxy1.push(qOxy2.front());
			qOxy2.pop();
		}
	}
	int getOxygen() {
		for (int i = 0; i < len; i++) {
			getOxyBits(i);
			printf("생존\n");
			while (!qOxy1.empty()) {
				if (qOxy1.front()[i] == bits[i]) {
					printf("%s ", qOxy1.front());
					qOxy1.pop();
				}
			}
			while (!qOxy2.empty()) {
				qOxy1.push(qOxy2.front());
				qOxy2.pop();
			}
			printf("\n");
		}
		int num = 0;
		for (int i = len - 1; i >= 0; i--) {
			if (qOxy1.front()[i] == '1') {
				num += pow(2, len - 1 - i);
			}
		}
		return num;
	}
	int getMul1() {
		int num1 = 0, num2 = 0;
		printf("\n");
		for (int i = 0; i < len; i++) {
			printf("%d", bits[i]);
		}
		printf("\n");
		for (register int i = len - 1; i >= 0; i--) {
			if (bits[i] > 0) {
				num1 += pow(2, len - 1 - i);
			}
			else {
				num2 += pow(2, len - 1 - i);
			}
			printf("%d %d\n", num1, num2);
		}
		return num1 * num2;
	}
};
int main() {
	Solution sol;
	char str[len];
	while (!cin.eof()) {
		scanf("%s", &str);
		printf("%s\n", str);
		if (str[0] == '5') break;
		sol.addBits(str);
	}
	printf("%d\n", sol.getOxygen());
	return 0;
}