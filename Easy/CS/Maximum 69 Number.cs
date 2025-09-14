/*
You are given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
*/

public class Solution {
    public int Maximum69Number (int num) {
        char[] str = num.ToString().ToCharArray();
        for(int i = 0; i < str.Length; i++) {
            if(str[i] == '6') {
                str[i] = '9';
                break;
            }
        }
        return int.Parse(new string(str));
    }
}
