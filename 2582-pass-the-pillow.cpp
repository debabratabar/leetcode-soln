

/*
Question Link  : https://leetcode.com/problems/pass-the-pillow/
Question Name : 2582. Pass the Pillow

*/


class Solution {
public:
    int passThePillow(int n, int time) {
        int totalPass = time/(n-1);
        int leftPass =  time%(n-1) ; 
        int result = -1;
        cout << totalPass <<" " << leftPass ; 

        if (totalPass == 0 ){
            result = leftPass+1;
        }
        else{
        if ( totalPass%2 ==0){
            result = leftPass+1;
        }
        else{
            result=n-leftPass;
        }
    }

        return result;
    }
};