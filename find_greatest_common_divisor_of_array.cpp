/*
PROBLEM DESCRIPTION
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.
The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

Example 1:
Input: nums = [2,5,6,9,10]
Output: 2
Explanation:
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.

Example 2:
Input: nums = [7,5,6,8,3]
Output: 1
Explanation:
The smallest number in nums is 3.
The largest number in nums is 8.
The greatest common divisor of 3 and 8 is 1.

Example 3:
Input: nums = [3,3]
Output: 3
Explanation:
The smallest number in nums is 3.
The largest number in nums is 3.
The greatest common divisor of 3 and 3 is 3.

Constraints:
2 <= nums.length <= 1000
1 <= nums[i] <= 1000
*/
/*
SOLUTION DESCRIPTION
First sort so that the min and max are at the first and last index respectively.
Then loop from 1 to min, and check if both min/max % i equals 0.
  Update the gcd if true.
Return gcd.
*/
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mn = nums[0];
        int mx = nums[nums.size() - 1];

        int gcd = 1;
        for(int i = 1; i <= mn; i++){
            if(mn % i == 0 && mx % i == 0) gcd = i;
        }
        return gcd;
    }
};
