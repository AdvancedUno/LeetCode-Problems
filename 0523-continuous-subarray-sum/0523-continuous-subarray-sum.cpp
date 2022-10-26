class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> umSave;
        

        int numSum = 0;
        
        for(int i = 0; i < nums.size(); i ++){
            int tempNum = nums[i]%k;
            numSum += tempNum;
            int tempSum = numSum%k;
            if(tempSum == 0 && i > 0)return true;
            unordered_map<int,int>::const_iterator umTemp = umSave.find(tempSum);
            if(umTemp == umSave.end()){
                umSave[tempSum] = tempNum;    
            }
            else{
                if(tempNum == 0 && umTemp->second != tempNum){
                    umSave[tempSum] = tempNum;    
                }else{
                    return true;
                }
            }
        }
        return false;

    }
};