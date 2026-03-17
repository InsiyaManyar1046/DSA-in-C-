/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
 
Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1 */

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int> nums={4,1,2,1,2};
    int x=0;

    for(int val : nums){
        x=x^val;
    }
    cout<<"The unique number : "<<x;
    return 0;
}

/*
XOR Basic Logic (0 and 1)

0 ^ 0 = 0
1 ^ 1 = 0
0 ^ 1 = 1
1 ^ 0 = 1

Important XOR Properties:
1) a ^ a = 0   -> Same numbers cancel each other
2) a ^ 0 = a   -> XOR with 0 keeps the number unchanged
3) XOR is commutative and associative (order does not matter)

Example:
nums = [4,1,2,1,2]

Step 1: x = 0 ^ 4 = 4
Step 2: x = 4 ^ 1 = 5
Step 3: x = 5 ^ 2 = 7
Step 4: x = 7 ^ 1 = 6
Step 5: x = 6 ^ 2 = 4

Here duplicate numbers cancel out:
1 ^ 1 = 0
2 ^ 2 = 0

So the expression becomes:
4 ^ 1 ^ 2 ^ 1 ^ 2
= 4 ^ (1^1) ^ (2^2)
= 4 ^ 0 ^ 0
= 4

Therefore the unique element is 4.

Time Complexity  : O(n)
Space Complexity : O(1)
*/

