/*
You are given two positive integers low and high.

An integer x consisting of 2 * n digits is symmetric if the sum of the first n digits of x is equal to the sum of the last n digits of x. Numbers with an odd number of digits are never symmetric.

Return the number of symmetric integers in the range [low, high].
*/

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int left_sum = 0, right_sum = 0;
        int sym_counter = 0, digits_counter = 0;
        for(int i=low; i<=high; i++){
            int num = i;
            digits_counter = (int(log10(num))+1);
            if(digits_counter%2 == 0){
                for(int j=0; j<digits_counter/2; j++){
                    right_sum += num % 10;
                    num /= 10;
                }
                for(int j=0; j<digits_counter/2; j++){
                    left_sum += num % 10;
                    num /= 10;
                }
                if(left_sum == right_sum){
                    sym_counter += 1;
                }
            }
            left_sum = 0;
            right_sum = 0;
        }
            return sym_counter;
    }
};
