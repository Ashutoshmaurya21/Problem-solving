class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int s=startTime.size();
        int v=endTime.size();
        int count=0;
        //for(int i=0;i<s;i++){
            for(int j=0;j<v;j++){
               if(endTime[j]>=queryTime && queryTime>=startTime[j]){
                   count++;
               }

            //}
        }
        return count;
        
    }
};
