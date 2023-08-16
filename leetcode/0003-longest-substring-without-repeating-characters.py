class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        idx = 0
        dictionary = {}
        answer = 0

        for cur, char in enumerate(s):
            # Case where it finds duplicates
            if char in dictionary and idx <= dictionary[char]:
                idx = dictionary[char] + 1
            # Case where continues to search
            else:
                answer = max(answer, cur - idx + 1)

            dictionary[char] = cur

        return answer
