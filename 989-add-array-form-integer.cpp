/*
Question Link  : https://leetcode.com/problems/add-to-array-form-of-integer
Question Name :  989. Add to Array-Form of Integer

*/


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i =num.size()-1;
        int number = k ; 
        vector<int> result  ;
        int carry = 0 , rem = 0 ,sum = 0 ;

        // for all equal digits
        while ( i>=0 && k!=0){
            rem = k%10 ; 
            sum = rem + num[i]+carry ;
            carry = sum /10 ; 
            result.push_back(sum%10) ; 
            i--;
            k=k/10 ; 
        }

        // for extra arr digit
        while(i>=0){
            sum =  num[i]+carry ;
            carry = sum /10 ; 
            result.push_back(sum%10) ; 
            i--;
        }

        //for extra k digit
        while(k!=0){
            rem = k%10 ; 
            sum =  rem +carry ;
            carry = sum /10 ; 
            result.push_back(sum%10) ; 
            k= k/10 ;
        }

        //if there is carry at the end
        if ( carry != 0){
            result.push_back(carry) ;
        }

        // reversing the result arr for expected result  
        for ( int i = 0 , j=result.size()-1;i<j;i++,j--){
            swap(result[i], result[j]);
        }

        return result ; 

    }
};