
# Question Link  : https://leetcode.com/problems/remove-linked-list-elements
# Question Name :  203. Remove Linked List Elements



# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:

        if head == None:
            return head

        prev = head
        res = head

        while res : 
            if res.val == val:
                prev.next = res.next
                res = res.next
            else:
                prev = res
                res = res.next

        if head.val == val :
            return head.next

        return head