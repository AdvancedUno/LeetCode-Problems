class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     
        int left = 0,right = numbers.size()-1;
        vector<int> result_val;
        
        while(left<right){
            
            if(target == (numbers[left] + numbers[right])){
                break;
            }

            // if target is smaller than the sum, then move left variable +1
            if(target > numbers[left] + numbers[right]){
                left ++;
            }else{
                right --;
            }
            
        }
        result_val.push_back(left+1);
        result_val.push_back(right+1);
        
        return result_val;
        
        
        
        
    }
};