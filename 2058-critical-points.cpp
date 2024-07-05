/*
Question Link  : https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points
Question Name : 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points

*/

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int> helper ;
        while(head != nullptr){
            helper.push_back(head->val);
            head =head->next;
        }
        if(helper.size()<3){
            vector<int> result;
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }

        vector<int> criticalPoints ;
        int  min = INT_MAX; 
        for ( int i=1;i<helper.size()-1;i++){
            if ( helper[i] > helper[i-1] && helper[i]> helper[i+1]){
                criticalPoints.push_back(i+1);
            }
            if ( helper[i] < helper[i-1] && helper[i] < helper[i+1]){
                criticalPoints.push_back(i+1);
            }
           
        }
        if ( criticalPoints.size()<2){
            vector<int> result;
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }

        for ( int i = 1 ; i<criticalPoints.size() ;i++){
            if ( criticalPoints[i] - criticalPoints[i-1]  < min ){
                min = criticalPoints[i] - criticalPoints[i-1] ; 
            }
        }
        // cout << endl << min ;

        vector<int> result;
        result.push_back(min);
        result.push_back(criticalPoints[criticalPoints.size()-1] - criticalPoints[0] );
        return result;


        

    }
};