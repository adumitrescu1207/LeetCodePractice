/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1 || k == 0 || k == nums.size()){
            return;
        }
        else{
            if(k > nums.size())
                k = k % nums.size();
            int aux_back[k], aux_front[nums.size()-k];
            //copy the last k elements
            for(int i=0; i<k; i++)
                aux_back[i] = nums[nums.size()-k+i];
            //copy the rest of the elements
            for(int i=0; i<nums.size()-k; i++)
                aux_front[i] = nums[i];
            //rewrite the array
            for(int i=0; i<k; i++)
                nums[i] = aux_back[i];
            for(int i=k; i<nums.size(); i++){
                nums[i] = aux_front[i-k];
            }
        } 
    }
};
