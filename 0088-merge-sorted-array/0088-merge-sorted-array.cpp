class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        for(int i= 0 ; i < n ; i ++){
            nums1[m+i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
        
        
    }
    
    
    vector<int> sorting(vector<int> input){
        
        if(input.size() == 1)return input;
        
        vector<int>left = sorting(std::vector<int>(input.begin(), input.begin()+input.size()/2));
        vector<int>right = sorting(std::vector<int>(input.begin()+input.size()/2, input.end()));
        vector<int>result;
        int cntLeft = 0;
        int cntRight = 0;
        while(cntLeft < left.size() || cntRight < right.size()){
            
            if(left[cntLeft] > right[cntRight]){
                result.push_back(right[cntRight]);
                cntRight ++;
            }else{
                result.push_back(left[cntLeft]);
                cntLeft++;
            }
            
            if(cntLeft == left.size()-1){
                while(cntRight < right.size()){
                    result.push_back(right[cntRight]);
                    cntRight++;
                }
                return result;
            }
            
            if(cntRight == right.size()-1){
                while(cntLeft < left.size()){
                    result.push_back(left[cntLeft]);
                    cntLeft++;
                }
            }
            
        }
        return result;
        
    }
    
    
    
};