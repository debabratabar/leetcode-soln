/*
Question Link  : https://leetcode.com/problems/intersection-of-two-arrays-ii
Question Name :  350. Intersection of Two Arrays II

*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        /*
        1. getting the freq of each element from two arrays 
        2. then comparing the freqency to get the eligible element for result 
        */
        vector<int> intersect_arr;

        vector<int> nums1_freq(1001 ,0 );
        vector<int> nums2_freq(1001 , 0 );

        for ( int i = 0 ;i<nums1.size();i++){
            nums1_freq[nums1[i]]++;
        }

        for ( int i = 0 ;i<nums2.size();i++){
            nums2_freq[nums2[i]]++;
        }

        int freq = -1;
        for ( int i = 0 ; i<1001;i++){
            freq= -1 ;
            //eligible condition
            if ( nums1_freq[i] == nums2_freq[i] && nums1_freq[i]!=0 ){
                freq  = nums1_freq[i];
            }
            else if ( nums1_freq[i] != nums2_freq[i] ){
                    if ( nums1_freq[i] !=0 && nums2_freq[i]!=0 ){
                        freq = nums1_freq[i]< nums2_freq[i] ? nums1_freq[i] : nums2_freq[i] ;
                    }
            }

            if ( freq!= -1 ){
                vector<int> helper(freq , i );
                intersect_arr.insert(intersect_arr.end() , helper.begin() , helper.end() ); 
            }

        }

        return intersect_arr;
    }
};