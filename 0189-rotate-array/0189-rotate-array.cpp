class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k = k%nums.size();
        
        
//         int index = k;
//         int tempNum;
//         int currentVal = nums[0];
//         int start = 0;
//         int startVal = nums[0];
//         int cntSwipe = 0;
        
        
        if(k == 0)return;
        
        int cntRotated = 0;
        int start = 0;
        int curr = 0;
        int numToBeRotated = nums[0];
        int tmp = 0;
        int n = nums.size();
        // Keep rotating the elements until we have rotated n 
        // different elements.
        while (cntRotated < nums.size())
        {
            do
            {
                tmp = nums[(curr + k)%n];
                nums[(curr+k)%n] = numToBeRotated;
                numToBeRotated = tmp;
                curr = (curr + k)%n;
                cntRotated++;
            } while (curr != start);
            // Stop rotating the elements when we finish one cycle, 
            // i.e., we return to start.

            // Move to next element to start a new cycle.
            start++;
            curr = start;
            numToBeRotated = nums[curr];
    }
    }
};