class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        return max([sum(each) for each in accounts])