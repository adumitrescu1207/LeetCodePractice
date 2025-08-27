/*
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.
*/

class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        long long guess = x;
        while (guess * guess > x) {
            guess = (guess + x / guess) / 2;
        }
        return guess;
    }
};

//Newton-Raphson Numerical Method
