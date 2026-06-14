class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        slow = fast = head
        prev = None

        while fast and fast.next:
            fast = fast.next.next

            nxt = slow.next
            slow.next = prev
            prev = slow
            slow = nxt

        ans = 0
        left, rght = prev, slow

        while left:
            ans = max(ans, left.val + rght.val)
            left = left.next
            rght = rght.next

        return ans