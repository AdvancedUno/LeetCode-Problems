class Solution {
public:
    string intToRoman(int num) {
        
        vector<pair<int, string>> storeDeno;
        storeDeno.push_back(make_pair(1000, "M"));
        storeDeno.push_back(make_pair(500, "D"));
        storeDeno.push_back(make_pair(100, "C"));
        storeDeno.push_back(make_pair(50, "L"));
        storeDeno.push_back(make_pair(10, "X"));
        storeDeno.push_back(make_pair(5, "V"));          
        storeDeno.push_back(make_pair(1, "I"));                    
        
        vector<pair<int, string>> storeSpecialCase;
        storeSpecialCase.push_back(make_pair(100, "C"));
        storeSpecialCase.push_back(make_pair(10, "X"));
        storeSpecialCase.push_back(make_pair(1, "I"));

        
        int divNum = 0, leftOverNum = num, checkNum = 0;
        
        string outputString = "";
                      
        for(int i = 0; i < storeDeno.size(); i ++){
            if(leftOverNum == 0)break;
            bool checkSpecial = false;
            divNum = leftOverNum/storeDeno[i].first;
            checkNum = leftOverNum;
            
            leftOverNum = num % storeDeno[i].first;
            
            if(divNum == 0)continue;
            for(int k = 0; k < storeSpecialCase.size(); k ++){
                
                if(checkNum/storeSpecialCase[k].first == 9){
                    outputString += storeSpecialCase[k].second;
                    
                    outputString += storeDeno[i-1].second;
                    
                    leftOverNum = checkNum - storeSpecialCase[k].first * 9;
                    checkSpecial = true;
                    i++;
                    break;
                }
                else if(checkNum/storeSpecialCase[k].first == 4){
                    outputString += storeSpecialCase[k].second;
                    outputString += storeDeno[i-1].second;
                    leftOverNum = checkNum - storeSpecialCase[k].first * 4;
                    checkSpecial = true;
                    break;
                }
            }
            if(checkSpecial == true)continue;
            
            
            for(int j = 0; j < divNum; j ++){
                outputString += storeDeno[i].second;
            }
            
        }


        
        return outputString;
        
        
        
        
    }
};