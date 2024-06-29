/*
Question Link  : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
Question Name :  1011. Capacity To Ship Packages Within D Days

*/



class Solution {
public:

    int isPossibleSoln( vector<int>& weights, int days , int mid  ){

            int dayCount = 0 , sum =0; 

            for ( int i=0;i<weights.size();i++){
                if ( sum + weights[i] <= mid ){
                    sum+= weights[i];
                }
                else{
                   dayCount++;
                   // elemenating for false solution 
                   if ( dayCount > days || weights[i] > mid ){
                    
                    days = days +1 ;
                    return days;
                   }
                   sum = weights[i];
                }
            }
            dayCount++;
            
            return dayCount ; 

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int mid  =0 ;
        int ans = -1;
        int max_weights = 0;
        int min_weights = 0 ;


        for ( int i =0;i<weights.size();i++){
            max_weights+=weights[i];
        }

        mid = min_weights+(max_weights -min_weights )/2;

       while(min_weights <= max_weights ){

            // checking the possible solution using binary search 
            if ( isPossibleSoln(weights, days , mid) <= days ){
                ans = mid ;
                max_weights= mid-1;
            }
            else{
                min_weights= mid+1; 
            }

            mid = min_weights+(max_weights -min_weights )/2;

        }

        return ans ;


    }
};