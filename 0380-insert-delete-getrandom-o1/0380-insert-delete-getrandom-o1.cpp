class RandomizedSet {
public:
    vector<int> valSet;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        auto it = find(valSet.begin(), valSet.end(), val);
        if (it == valSet.end()) {
            valSet.push_back(val);
            return true;
        }
        else {
            return false;
        }
    }
    
    bool remove(int val) {
        std::vector<int>::iterator position = std::find(valSet.begin(), valSet.end(), val);
        if (position != valSet.end()) {
            valSet.erase(position);
            return true;
        }else{
            return false;
        }
    }
    
        
    int getRandom() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(0, valSet.size()-1);
        
        return valSet[dis(gen)];
    }
    
};

