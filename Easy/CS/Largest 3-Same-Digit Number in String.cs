/*
You are given a string num representing a large integer. An integer is good if it meets the following conditions:

It is a substring of num with length 3.
It consists of only one unique digit.
Return the maximum good integer as a string or an empty string "" if no such integer exists.

Note:

A substring is a contiguous sequence of characters within a string.
There may be leading zeroes in num or a good integer.
*/

public class Solution {
    public string LargestGoodInteger(string num) {
        string substr = "";
        int digit = 0;
        for(int i=0; i<num.Length-2; i++)
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                if (digit < num[i] - 48)
                    digit = num[i] - 48;
                substr = digit.ToString() + digit.ToString() + digit.ToString();
            }
            return substr;
    }
}
