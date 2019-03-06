#pragma once

class fibonacci {
public:

	//same as the jump floor (algo)
	int Fibonacci(int n) {
		if (n <= 0)
			return 0;

		int pre = 1;
		int next = 1;
		int tmp = 0;
		for (int i = 3; i <= n; ++i)
		{
			tmp = next;
			next = pre + next;
			pre = tmp;
		}

		return next;
	}
};