class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k)
    {
       unordered_set<int> us_Store;
       
       if (k <= 0) return false;
       if (k >= nums.size()) k = nums.size() - 1;
       
       for (int i = 0; i < nums.size(); i++)
       {
           if (i > k) us_Store.erase(nums[i - k - 1]);
           if (us_Store.find(nums[i]) != us_Store.end()) return true;
           us_Store.insert(nums[i]);
       }
       
       return false;
    }
};