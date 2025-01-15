class Solution {
	public:
		std::vector<int> twoSum(std::vector<int>& nums, int target) {
			std::vector<int> result;
			std::unordered_map<int, int> indexMap;

			for (unsigned int i = 0; i< nums.size(); i++) {
				int operationResult = target - nums[i];
				std::unordered_map<int, int>::iterator it = indexMap.find(operationResult);
				if (it != indexMap.end()) {
					result.push_back(it->second);
					result.push_back(i);
					return (result);
				}
				indexMap[nums[i]] = i;
			}
			return (result);
		}
};