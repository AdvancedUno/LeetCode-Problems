class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0;
        int end = arr.size()-1;

        while(end >= start){

            if(end == start)return 1;

            if(arr[start] < arr[start+1]){
                start ++;
            }

            if(arr[end] < arr[end-1]){
                end --;
            }
            if(end == start)return end;
        }


        return end;
    }
};