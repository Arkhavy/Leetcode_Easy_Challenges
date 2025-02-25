/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    for (let i = 0; i < nums.length; i++) {
        let save = nums[i];
        for (let j = i + 1; j < nums.length; j++) {
            if (save + nums[j] == target)
                return ([i, j]);
        }
    }
    return ([0, 0]);
};