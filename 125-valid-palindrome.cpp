/*
Question Link  : https://leetcode.com/problems/valid-palindrome/
Question Name :  125. Valid Palindrome

*/



class Solution {
public:

    string transform(string s){
        string transformed_str ;
        for ( int i=0;i<s.size();i++){
            if ( (s[i] >=65 && s[i]<= 90 ) || (s[i] >=97 && s[i]<= 122 ) ||  (s[i] >=48 && s[i]<= 57) ){
                transformed_str.push_back(tolower(s[i]));
            }
        }
        return transformed_str;
    }
    bool isPalindrome(string s) {
     string transformed_str = transform(s);
	    
	    for ( int i = 0 , j = transformed_str.size()-1;i<j;i++,j--){
	        if(transformed_str[i]!=transformed_str[j]){
	            return false ;
	        }
	    }
	    
	   return true ;   
        
    }
};