#include <Map.h>
namespace Kay {
	Map::Map() {
		for (register int i = 0; i < R; i++) {
			for (register int j = 0; j < C; j++) {
				_map[i][j] = 0;
			}
			nCorrectR[i] = 0;
			nCorrectC[i] = 0; // it should be deleted if R is not equal with C.
		}
		for (register int i = 0; i < 100; i++) {
			hash[i].r = hash[i].c = hash[i].putain = 0;
		}
	}

	void
	Map::setMap(int input[R][C]) {
		for (register int i = 0; i < R; i++) {
			for (register int j = 0; j < C; j++) {
				_map[i][j] = input[i][j];
				hash[input[i][j]].putain = 1;
			}
		}
	}

	bool
	Map::mark(int num) {
		if (hash[num].putain) {
			nCorrectR[hash[num].r]++;
			nCorrectC[hash[num].c]++;
			if (nCorrectR[hash[num].r] == R || nCorrectC[hash[num].c] == C) {
				return true;
			}
		}
		return false;
	}
}