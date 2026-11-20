// LeetCode 23: Merge k Sorted Lists
// LeetCode supplies ListNode. Time: O(N log k), Space: O(k)
class Solution {
 struct Compare {
  bool operator()(ListNode* a,ListNode* b) const { return a->val>b->val; }
 };
public:
 ListNode* mergeKLists(vector<ListNode*>& lists) {
  priority_queue<ListNode*,vector<ListNode*>,Compare> pq;
  for(ListNode* node:lists) if(node!=nullptr) pq.push(node);
  ListNode dummy(0);
  ListNode* tail=&dummy;
  while(!pq.empty()) {
   ListNode* node=pq.top(); pq.pop();
   tail->next=node; tail=tail->next;
   if(node->next!=nullptr) pq.push(node->next);
  }
  tail->next=nullptr;
  return dummy.next;
 }
};