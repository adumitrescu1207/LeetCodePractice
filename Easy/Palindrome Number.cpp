/*
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int copy_x = x;
        long res = 0;
        while(x){
            res = res * 10 + x % 10;
            x /= 10;
        }
        return res == copy_x;
    }
};
