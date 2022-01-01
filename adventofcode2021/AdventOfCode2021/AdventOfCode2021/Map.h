#include <stdio.h>
namespace Kay {
	struct Point {
		int r, c, putain;
	};

	class Map {
	private:
		static const int R = 5, C = 5;
		int _map[R][C];
		int nCorrectR[R], nCorrectC[C];
		Point hash[100];
	public:
		Map();
		void setMap(int input[R][C]);
		bool mark(int num);
	};
}