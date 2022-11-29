class Solution {
public:
    string makeGood(string s) {
        bool checkOK = false;
        bool checkStatus = true;
        while(!checkOK){
            checkStatus = true;
            if(s.length() < 1)break;
            for(int i = 0; i < s.length()-1; i ++)
            {
                if(abs(s[i] - s[i+1]) == 32 ){
                    s = s.erase(i, 2);
                    checkStatus = false;
                    break;
                }
            }
            if(checkStatus )break;
        }
        return s;
        
        
        
    }
};