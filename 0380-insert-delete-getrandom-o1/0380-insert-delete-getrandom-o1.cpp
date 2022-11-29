class RandomizedSet {
public:
    unordered_map<int, bool> valSet;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(valSet.find(val) == valSet.end()){
            valSet.insert(make_pair(val,true));    
            return true;
        }else return false;
        

    }
    
    bool remove(int val) {
        if(valSet.find(val) != valSet.end()){
            valSet.erase(val); 
            return true;
        }else return false;
    }
    
    
        
    int getRandom() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(0, valSet.size()-1);
        
        //return valSet[dis(gen)];
        int i = dis(gen);
        for (auto& it: valSet) {
            if(i == 0){
                return it.first;
            }
            i--;
        }
        return 0;
    }
    
};

