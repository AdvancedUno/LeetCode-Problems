class Solution {
public:
    string reverseWords(string s) {
        

	int start = 0;
	bool newWord = true;
	stack<string> saveS;
    bool lastInclude = true;
    
    if(s[s.length()-1] == ' '){
        lastInclude = false;
    }
	for(int i = 0; i < s.length(); i ++){

        if(i == s.length() -1 && newWord == true){
            start = i;
            newWord = false;
        }
	
		if(s[i] == ' ' || i == s.length()-1){
           
            if(i == s.length()-1 && lastInclude){
                i++;

            } else if(i == s.length()-1 && !lastInclude)break;
            

            
			if(newWord == false){
				string subS = s.substr(start, i - start);
                
				saveS.push(subS);
			}
			newWord = true;
						

		}else{
			if(newWord == true){
				start = i;
                newWord = false;
			}
		}
		
	}
        
    string resultS = "";
        
    while(saveS.size() > 1){
        resultS += saveS.top();
        resultS += " ";

        saveS.pop();
        
    }
    resultS += saveS.top();

    saveS.pop();
    
	
    return resultS;

    }

};