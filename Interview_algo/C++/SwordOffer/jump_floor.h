#pragma once

class jump_floor {
public:

	//easy to overflow
	int jumpFloor(int number) {
		if (number <= 0)
			return 0;
		if (number == 1)
			return 1;
		if (number == 2)
			return 2;
		return jumpFloor(number - 1) + jumpFloor(number - 2);
	}

	int jumpFloor1(int number) {
		if (number <= 0)
			return 0;
		if (number == 1)
			return 1;

		int pre = 1;
		int next = 2;
		int tmp = 0;

		for (int i = 0; i <= number; ++i)
		{
			tmp = next;
			next = pre + next;
			pre = tmp;
		}

		return next;
	}
};
