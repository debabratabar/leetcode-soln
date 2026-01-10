
# Question Link  : https://leetcode.com/problems/linked-list-cycle
# Question Name :  141. Linked List Cycle


############################ Soln - 1 ############################
# using storing the add approach using an array


# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        
        ref = []

        while head : 
            
            if head not in ref:
                ref.append(head)
                head = head.next
            else:
                return True


        # print(ref)

        return False    
    

############################ Soln - 2 ############################
# using Floyd's Cycle Finding Algorithm ( slow -1 step , fast - 2 step)

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        
        slow = head
        fast = head

        while fast is not None and fast.next is not None:
            slow = slow.next
            fast = fast.next.next
            if slow == fast:
                return True  # Cycle detected

        return False  # No cycle  