class Solution {
public:

    int removeDuplicates(vector<int>& nums) {

        map<int , int> store ;

        for(int i = 0; i < nums.size(); i ++){
            if(store.find(nums[i]) != store.end()){
                store[nums[i]] +=1;
            }else{
                store[nums[i]] = 1;
            }
        }
        
        int total_size = 0;

        for (auto s = store.begin(); s != store.end(); s++) {
            for(int i = 0; i < min(2, s->second); i ++){
                nums[total_size] = s->first;
                total_size ++;
            }
        }
        
            
      return total_size;
      
      
    }
};