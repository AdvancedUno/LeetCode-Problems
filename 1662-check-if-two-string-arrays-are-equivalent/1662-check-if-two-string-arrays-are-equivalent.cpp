class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string tempWord1 = "";
        int cnt2 = 0;
        for(string wString : word1){
            tempWord1 += wString;
        }
        
        int i;
        for(i = 0; i < tempWord1.length();){
            for(string wString : word2){
                for(int j = 0; j < wString.length(); j ++){
                    if(tempWord1[i] != wString[j])return false;
                    i++;
                    cnt2++;
            }
            }
        }
        cout << cnt2 << " " << i << endl;
        if(i != cnt2)return false;
        
        
        
        return true;
        
    }
};