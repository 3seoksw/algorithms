class Solution:
    def longestPalindrome(self, s: str) -> str:
        if len(s) == 1:
            return s

        # length: length of the found palindrome
        # idx: index where the palindrome first found
        length, idx = 0, 0
        for cur in range(len(s)):
            if s[cur - length : cur + 1] == s[cur - length : cur + 1][::-1]:
                idx = cur - length
                length += 1
            elif (
                cur - length > 0
                and s[cur - length - 1 : cur + 1] == s[cur - length - 1 : cur + 1][::-1]
            ):
                idx = cur - length - 1
                length += 2

        return s[idx : idx + length]
