/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.
*/

/*public class Solution {
    public bool IsPowerOfTwo(int n) {
       return Math.Log(n,2) % 1 < 1e-10;
    }
}
*/
public class Solution {
    public bool IsPowerOfTwo(int n) {
       return (n & (n-1)) == 0 && n > 0;
    }
}
