// LeetCode 155: Min Stack
// All operations O(1); Space: O(n)
class MinStack {
 stack<pair<int,int>> st;
public:
 MinStack() {}
 void push(int val) {
  int mn=st.empty()?val:min(val,st.top().second);
  st.push({val,mn});
 }
 void pop() { st.pop(); }
 int top() { return st.top().first; }
 int getMin() { return st.top().second; }
};