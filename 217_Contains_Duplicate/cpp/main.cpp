class Solution {
public:
	bool containsDuplicate(std::vector<int>& nums) {
		for (unsigned int i = 0; i< nums.size(); i++) {
			for (unsigned int j = i + 1; j < nums.size(); j++) {
				if (nums[i] == nums[j])
					return (true);
			}
		}
		return (false);
	}
};

//TIMEOUT