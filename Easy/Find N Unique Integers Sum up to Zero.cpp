/*
Given an integer n, return any array containing n unique integers such that they add up to 0.
*/
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            arr[i] = -(n-i);
            arr[n-i-1] = n-i;
        }
        if(n%2 != 0)
            arr[n/2] = 0;
        return arr;
    }
};
