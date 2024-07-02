/*
Question Link  : https://leetcode.com/problems/move-zeroes/
Question Name :  283. Move Zeroes

*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 , j = 0 ;
        int n = nums.size();
        while ( i<n && j<n ){
            if ( nums[j] !=0  ){
                swap(nums[i] , nums[j]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    }
};