class Solution:
    def maxArea(self, height: List[int]) -> int:
        start, end = 0, len(height) - 1
        answer = 0

        while start < end:
            w = end - start
            h = min(height[start], height[end])
            area = w * h
            answer = max(area, answer)

            if height[start] < height[end]:
                start += 1
            else:
                end -= 1

        return answer
