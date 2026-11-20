// LeetCode 232: Implement Queue using Stacks
// Amortized O(1) per operation; Space: O(n)
class MyQueue {
 stack<int> inStack, outStack;
 void transfer() {
  if(outStack.empty())
   while(!inStack.empty()) { outStack.push(inStack.top()); inStack.pop(); }
 }
public:
 MyQueue() {}
 void push(int x) { inStack.push(x); }
 int pop() { transfer(); int x=outStack.top(); outStack.pop(); return x; }
 int peek() { transfer(); return outStack.top(); }
 bool empty() { return inStack.empty() && outStack.empty(); }
};