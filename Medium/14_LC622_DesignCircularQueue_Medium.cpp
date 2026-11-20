// LeetCode 622: Design Circular Queue
// Operations O(1); Space: O(k)
class MyCircularQueue {
 vector<int> data;
 int frontIndex, rearIndex, count, capacity;
public:
 MyCircularQueue(int k) : data(k), frontIndex(0), rearIndex(-1), count(0), capacity(k) {}
 bool enQueue(int value) {
  if(isFull()) return false;
  rearIndex=(rearIndex+1)%capacity;
  data[rearIndex]=value; count++;
  return true;
 }
 bool deQueue() {
  if(isEmpty()) return false;
  frontIndex=(frontIndex+1)%capacity; count--;
  return true;
 }
 int Front() { return isEmpty()?-1:data[frontIndex]; }
 int Rear() { return isEmpty()?-1:data[rearIndex]; }
 bool isEmpty() { return count==0; }
 bool isFull() { return count==capacity; }
};