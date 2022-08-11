class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> iResultVector;

        vector<pair<int, int>> iSaveIdxInfoVec;
        for (int i = 0; i < nums.size(); i++) {

            iSaveIdxInfoVec.push_back(make_pair(nums[i], i));

        }

        sort(iSaveIdxInfoVec.begin(), iSaveIdxInfoVec.end());

        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                if (iSaveIdxInfoVec[i].first + iSaveIdxInfoVec[j].first == target) {
                    iResultVector.push_back(iSaveIdxInfoVec[i].second);
                    iResultVector.push_back(iSaveIdxInfoVec[j].second);
                    return iResultVector;
                }

            }

        }
        return iResultVector;

    }
};