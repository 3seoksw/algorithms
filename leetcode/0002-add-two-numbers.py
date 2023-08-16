# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        l1_num = 0
        l2_num = 0

        num = 1
        while l1:
            l1_num += l1.val * num
            l1 = l1.next
            num *= 10

        num = 1
        while l2:
            l2_num += l2.val * num
            l2 = l2.next
            num *= 10

        add = l1_num + l2_num

        header = None
        result = None

        for c in str(add):
            if not header:
                header = ListNode(int(c))
                result = header
            else:
                node = ListNode(int(c), result)
                result = node

        return result
