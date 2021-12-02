#include <stdio.h>
int nums[10000];
int main() {
	int ans=0, num, cnt=0;
	while (1) {
		scanf("%d", &num);
		nums[cnt] += num;
		nums[cnt + 1] += num;
		nums[cnt + 2] += num;
		cnt++;
		if (num == -1) break;
	}
	for (int i = 2; i <= cnt; i++) {
		if (nums[i + 1] > nums[i]) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}