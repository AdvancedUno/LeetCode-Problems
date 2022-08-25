


class Solution {
public:
    
    int saveMoney[101];
    int rob(vector<int>& nums) {
        
        for(int i = 0 ; i < 101; i ++){
            saveMoney[i] = -1;
        }
        
        return max(solve(nums, 0, 0), solve(nums,1,0));
        
    }
    int solve(vector<int>& nums, int pos, int sum){
        if(pos > nums.size() -1)return 0;
        if(pos == nums.size()-1 || pos == nums.size()-2) return nums[pos];

        if(saveMoney[pos] > -1){
            return saveMoney[pos];
        }
        saveMoney[pos] = max(solve(nums, pos+2, sum) + nums[pos], solve(nums, pos+3, sum) + nums[pos]);
        return saveMoney[pos];
    }
    
    
};
