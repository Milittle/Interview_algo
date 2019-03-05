#pragma once
#include <vector>

class replace_space {
public:
	void replaceSpace(char *str, int length) {
		if (length <= 0)
			return;

		std::vector<char> tmp;

		for (int i = 0; i < length; ++i)
		{
			if (*(str + i) == ' ')
			{
				tmp.push_back('%');
				tmp.push_back('2');
				tmp.push_back('0');
			}
			else
			{
				tmp.push_back(*(str + i));
			}
		}

		memcpy(str, tmp.data(), tmp.size());
	}
};
