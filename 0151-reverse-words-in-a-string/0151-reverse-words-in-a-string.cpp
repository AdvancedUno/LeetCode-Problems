class Solution {
public:
    string reverseWords(string s) {
        

	int start = 0;
	bool newWord = true;
	stack<string> saveS;
    bool lastInclude = true;
    
    if(s[s.length()-1] == ' '){
        lastInclude = false;
        cout << "false" << endl;
    }
	for(int i = 0; i < s.length(); i ++){

        if(i == s.length() -1 && newWord == true){
            start = i;
            newWord = false;
        }
	
		if(s[i] == ' ' || i == s.length()-1){
            if(i == s.length()-1){
                cout << s[i] << endl;
                cout << s.substr(start, i - start) << endl;
                cout << start << endl;
                cout << i << endl;
            }
            if(i == s.length()-1 && lastInclude){
                i++;
                cout << newWord << endl;
                //cout << "yes" << endl;
            } else if(i == s.length()-1 && !lastInclude)break;
            

            
			if(newWord == false){
				string subS = s.substr(start, i - start);
                cout << subS << endl;
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
        cout << saveS.top() << " ";
        saveS.pop();
        
    }
    resultS += saveS.top();
    cout << saveS.top();
        
    saveS.pop();
    
	
    return resultS;

    }

};