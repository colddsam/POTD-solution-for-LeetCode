class Solution:
    def find132pattern(self, nums: List[int]) -> bool:
        small = float('inf')
        stack = []
        for num in nums:
            while stack and stack[-1][0] <= num:
                stack.pop()
            if stack and num > stack[-1][1]:
                return True
            if num > small:
                stack.append([num, small])
            else:
                small = num
        return False
