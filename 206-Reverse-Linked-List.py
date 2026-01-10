
# Question Link  : https://leetcode.com/problems/reverse-linked-list/
# Question Name :  206. Reverse Linked List



# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        values = []

        while head:
            values.append(head.val)
            head = head.next

        head = ListNode(0)

        t1 = head

        for i in values[::-1]:
            node = ListNode(i)
            head.next = node
            head = node

        return t1.next