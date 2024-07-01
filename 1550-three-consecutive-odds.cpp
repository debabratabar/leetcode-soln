/*
Question Link  : https://leetcode.com/problems/three-consecutive-odds/
Question Name : 1550. Three Consecutive Odds

*/

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        //edge case for arr size less than 3 
        if ( arr.size() < 3){
            return false ;
        }


        for ( int i = 0;i<=arr.size()-3;i++){
            if ( arr[i]%2!=0  && arr[i+1]%2!=0  && arr[i+2]%2!=0 )
                // cout << i << " " <<  ;
                return true ;
        }
        return false ;
    }
};