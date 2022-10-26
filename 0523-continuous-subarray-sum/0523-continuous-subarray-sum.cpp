class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> umSave;
        
        if(nums.size() <2)return false;
        if(k == 1)return true;
        int numSum = 0;
        
        for(int i = 0; i < nums.size(); i ++){
            numSum += nums[i]%k;
            if(numSum%k == 0 && i > 0)return true;
            cout << numSum << endl;
            if(umSave.find(numSum%k) == umSave.end()){
                umSave[numSum%k] = nums[i]%k;    
            }
            else{
                if(nums[i]%k == 0 && umSave.find(numSum%k)->second != nums[i]%k){
                    umSave[numSum%k] = nums[i]%k;    
                }else{
                    return true;
                }
            }
        }
        return false;

    }
};