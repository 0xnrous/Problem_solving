class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map_dic = {}
        i = 0 
        while i < len(nums):
            num = nums[i]
            equation_comp = target - num  
            if equation_comp in map_dic:
                return [i , map_dic[equation_comp]]
            map_dic[num] = i 
            i += 1
            