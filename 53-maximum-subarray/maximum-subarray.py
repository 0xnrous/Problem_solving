class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_array = nums[0]
        cur_sum  = 0 

        for i in nums : 
            if cur_sum < 0 :
                cur_sum = 0 
            cur_sum += i 
            max_array = max(max_array , cur_sum)
        return max_array 