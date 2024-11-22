from typing import List

class Solution:
	def twoSum(self, nums: List[int], target: int) -> List[int]:
		for i, firstNumber in enumerate(nums):
			for j, secondNumber in enumerate(nums):
				if (i == j):
					continue
				if (firstNumber + secondNumber == target):
					return ([i, j])
		return ([0, 0])