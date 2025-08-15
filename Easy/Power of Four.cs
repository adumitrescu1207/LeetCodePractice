/*
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.
*/

public class Solution {
    public bool IsPowerOfFour(int n) {
        if(Math.Log(n,4) % 1 == 0)
            return true;
        return false;
    }
}
