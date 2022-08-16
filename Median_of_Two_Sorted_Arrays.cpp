class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> iSaveNewVec;
        int iPoint1 = 0;
        int iPoint2 = 0;

        while (iPoint1 < nums1.size() && iPoint2 < nums2.size()) {

            if (nums1[iPoint1] < nums2[iPoint2]) {
                iSaveNewVec.push_back(nums1[iPoint1]);
                iPoint1++;
            }
            else {
                iSaveNewVec.push_back(nums2[iPoint2]);
                iPoint2++;
            }

        }

        if (iPoint2 < nums2.size()) {
            while (iPoint2 < nums2.size()) {
                iSaveNewVec.push_back(nums2[iPoint2]);
                iPoint2++;
            }
        }
        else if (iPoint1 < nums1.size()) {
            while (iPoint1 < nums1.size()) {
                iSaveNewVec.push_back(nums1[iPoint1]);
                iPoint1++;
            }
        }
        if (iSaveNewVec.size() % 2 == 0) {
            return double(iSaveNewVec[iSaveNewVec.size() / 2] + iSaveNewVec[iSaveNewVec.size() / 2 - 1]) / 2;
        }
        else {
            return double(iSaveNewVec[iSaveNewVec.size() / 2]);
        }
    }
};