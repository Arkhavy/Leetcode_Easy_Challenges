class Solution {
	public:
		bool containsDuplicate(std::vector<int>& nums) {
			std::sort(nums.begin(), nums.end());
			for (unsigned int i = 0; i < nums.size(); i++) {
				if (i + 1 >= nums.size())
					return (false);
				if (nums[i] == nums[i + 1])
					return (true);
			}
			return (false);
		}
};