#pragma once
#include <vector>

class two_dimension_array_search {
public:

	//�����ⷨ
	bool Find(int target, std::vector<std::vector<int> > array) {
		
		for (auto it = array.begin(); it != array.end(); ++it)
		{
			for (auto itt = it->begin(); itt != it->end(); ++itt)
			{
				if ((*itt) == target)
					return true;
			}
		}
		return false;
	}

	// ˼·�ⷨ
	bool Find(int target, std::vector<std::vector<int> > array) {
		for (auto it = array.begin(); it != array.end(); ++it)
		{
			for (auto itt = it->begin(); itt != it->end(); ++itt)
			{
				if ((*itt) == target)
					return true;
				else if ((*itt) > target) {
					break;
				}
			}
		}
		return false;
	}
};
