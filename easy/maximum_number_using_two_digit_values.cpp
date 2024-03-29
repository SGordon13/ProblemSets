/*
PROBLEM DESCRIPTION
You are given a positive integer num consisting only of digits 6 and 9.
Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

Example 1:
Input: num = 9669
Output: 9969
Explanation: 
Changing the first digit results in 6669.
Changing the second digit results in 9969.
Changing the third digit results in 9699.
Changing the fourth digit results in 9666.
The maximum number is 9969.

Example 2:
Input: num = 9996
Output: 9999
Explanation: Changing the last digit 6 to 9 results in the maximum number.

Example 3:
Input: num = 9999
Output: 9999
Explanation: It is better not to apply any change.
 
Constraints:
1 <= num <= 104
num consists of only 6 and 9 digits.
*/
/*
SOLUTION DESCRIPTION
Since you are trying to get a maximum number, there is no need to change a 9 to a 6.
Loop through the integer as a string.
At the first '6', note the index then change it to a 9 and return the new value.
If you looped through with no '6' appearing, then return original value since you cannot make it larger.
*/
class Solution {
public:
    int maximum69Number (int num) {
        string n = to_string(num);
        int i = 0;
        while(i < n.length()){
            if(n[i] == '6') break;
            i++;
        }
        if(i == n.length()) return num;
        n[i] = '9';
        return stoi(n);
    }
};
