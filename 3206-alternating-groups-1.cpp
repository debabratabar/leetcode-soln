/*
Question Link  : https://leetcode.com/problems/alternating-groups-i/description/
Question Name :  3206. Alternating Groups I 

*/


class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        
        int algrp = 0 ;
        int n = colors.size();
        for ( int i =0;i<n-2;i++){
            if ( colors[i] != colors[i+1] && colors[i+1] != colors[i+2] ){
                // cout << i << endl;
                algrp++; 
            }
            
        }
        
        if ( colors[n-2] != colors[n-1] && colors[n-1] != colors[0]  ){
            // cout << n-2 << endl;
            algrp++;
        }
        
        if ( colors[n-1] != colors[0] && colors[0] != colors[1]  ){
            // cout << n-2 << endl;
            algrp++;
        }
        
        return algrp ;
    }
};