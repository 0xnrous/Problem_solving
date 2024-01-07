class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # left = buy -- right  = sell 
        left = 0 
        right = 1
        max_sell = 0

        # loop on list
        while right < len(prices):
            if prices[left] < prices[right]:
                profit = prices[right] - prices[left]
                max_sell = max(max_sell , profit)
            
            else :
                left = right 
            right += 1
        return max_sell

        