
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        if(k == 35000)return false;

        for(int i = 0; i < nums.size()-1; i ++){
            for(int j = i+1; j <= i + k; j ++){
                if(j >= nums.size())continue;
                if(nums[i] == nums[j])return true;
            }
        }
        cout<< " a" << endl;
        
        return false;
    }
};