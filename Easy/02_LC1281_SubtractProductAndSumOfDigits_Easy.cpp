// LeetCode 1281: Subtract Product and Sum of Digits
// Time: O(number of digits), Space: O(1)
class Solution {
public:
 int subtractProductAndSum(int n) {
  int product=1, sum=0;
  while(n>0) {
   int digit=n%10;
   product*=digit;
   sum+=digit;
   n/=10;
  }
  return product-sum;
 }
};