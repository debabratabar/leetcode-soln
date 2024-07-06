/*
Question Link  : https://leetcode.com/problems/reverse-string/
Question Name :  344. Reverse String

*/



class Solution {
public:
    void reverseString(vector<char>& s) {
        
        for ( int i = 0 , j=s.size()-1 ; i<j ; i++,j--){
            swap(s[i] , s[j]);
        }
    }
};