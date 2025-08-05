/*
You are given two arrays of integers, fruits and baskets, each of length n, where fruits[i] represents the quantity of the ith type of fruit, and baskets[j] represents the capacity of the jth basket.

From left to right, place the fruits according to these rules:

Each fruit type must be placed in the leftmost available basket with a capacity greater than or equal to the quantity of that fruit type.
Each basket can hold only one type of fruit.
If a fruit type cannot be placed in any basket, it remains unplaced.
Return the number of fruit types that remain unplaced after all possible allocations are made.
*/

public class Solution {
public int NumOfUnplacedFruits(int[] fruits, int[] baskets) {
int[] used = new int [baskets.Length];
int sum = 0;
    for(int i=0; i<fruits.Length; i++)
        for(int j=0; j<baskets.Length; j++)
            if(fruits[i] <= baskets[j] && used[j] != 1){
            used[j] = 1;
            sum+= 1;
            break;        
        }
return fruits.Length - sum;
    }   
}
