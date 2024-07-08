class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0 
        element = None 
        for num in nums:
            if count == 0 :
                element = num 
            count += (1 if num == element else -1)
        return element


    

        