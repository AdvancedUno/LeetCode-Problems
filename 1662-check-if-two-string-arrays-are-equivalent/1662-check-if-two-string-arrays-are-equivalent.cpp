class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string tempWord1 = "";
        string tempWord2 = "";
        for(string wString : word1){
            tempWord1 += wString;
        }
        
        for(string wString : word2){
            tempWord2 += wString;
        }
        
        if(tempWord1.length() != tempWord2.length())return false;
        
        for(int i = 0; i <tempWord1.length(); i ++){
            if(tempWord1[i] != tempWord2[i])return false;            
        }
        
        // for(int i = 0; i < tempWord1.length(); i ++){
        //     for(string wString : word2){
        //         for(int j = 0; j < wString.length(); j ++){
        //             if(tempWord1[i] != wString[j])return false;
        //             i++;
        //     }
        //     }
        // }
        
        
        
        
        return true;
        
    }
};