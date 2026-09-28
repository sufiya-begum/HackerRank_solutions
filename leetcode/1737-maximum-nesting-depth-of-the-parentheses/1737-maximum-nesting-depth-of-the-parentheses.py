class Solution:
    def maxDepth(self, s: str) -> int:
        d = 0
        max_d = 0
        for c in s:
            if c == '(':
                d += 1
                max_d = max(max_d,d)
            elif c == ')':
                d -= 1
        return max_d

        