
# Question Link  : https://leetcode.com/problems/remove-duplicates-from-sorted-list
# Question Name :  83. Remove Duplicates from Sorted List


# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

        
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:

        if head == None or head.next== None  :
            return head

        res = head 
        curr = res.next


        while res and curr:

            if res.val != curr.val :
                res.next = curr
                res = curr
            curr = curr.next

        res.next = None

               
        return head