// LeetCode 19: Remove Nth Node From End of List
// LeetCode supplies ListNode. Time: O(n), Space: O(1)
class Solution {
public:
 ListNode* removeNthFromEnd(ListNode* head, int n) {
  ListNode dummy(0); dummy.next=head;
  ListNode* fast=&dummy;
  ListNode* slow=&dummy;
  for(int i=0;i<n;i++) fast=fast->next;
  while(fast->next!=nullptr) { fast=fast->next; slow=slow->next; }
  ListNode* target=slow->next;
  slow->next=target->next;
  delete target;
  return dummy.next;
 }
};