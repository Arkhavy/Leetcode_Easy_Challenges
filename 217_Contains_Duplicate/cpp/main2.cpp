class Solution {
	public:
		bool containsDuplicate(std::vector<int>& nums) {
			std::unordered_map<int, int> indexMap;

			for (unsigned int i = 0; i < nums.size(); i++) {
				std::unordered_map<int, int>::iterator it = indexMap.find(nums[i]);
				if (it != indexMap.end())
					return (true);
				indexMap[nums[i]] = i;
			}
			return (false);
		}
};

//NOT OPTIMIZED