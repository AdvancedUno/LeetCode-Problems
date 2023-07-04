class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> saveCnts;
        
        for(int i : nums){
            
            if(saveCnts.find(i)!=saveCnts.end()){
                saveCnts[i] = saveCnts[i] + 1;
            }else{
                saveCnts.insert(make_pair(i, 1));    
            }
        }
        
         for(pair<int,int> elem : saveCnts){
                if(elem.second == 1)
                {
                    return elem.first;
                }
        }
        
        cout << "a" << endl;
        return 0;
        
    }
};