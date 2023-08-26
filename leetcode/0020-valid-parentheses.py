class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        str_list = list(s)

        answer = True

        for ch in str_list:
            if ch == "[" or ch == "(" or ch == "{":
                stack.append(ch)
            elif len(stack) != 0:
                if (
                    (ch == "]" and stack[-1] == "[")
                    or (ch == ")" and stack[-1] == "(")
                    or (ch == "}" and stack[-1] == "{")
                ):
                    stack.pop()
                else:
                    answer = False
                    break
            else:
                answer = False
                break

        if len(stack) != 0:
            answer = False

        return answer
