#pragma once
#include <vector>

class unusual_jump_floor {
public:
	int jumpFloorII(int number) {

		if (number <= 0)
			return 0;

		int tmp = 1;

		for (int i = 2; i <= number; ++i)
		{
			tmp = tmp * 2;
		}

		return tmp;
	}
};