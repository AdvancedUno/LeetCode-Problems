class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        for(int i = 0; i < matrix.size()-1; i ++){
            
            for(int j = 0; j < matrix[i].size()-1; j ++){
                
                int x = 1;
                while(i+x < matrix.size() && j+x < matrix[i].size()){
                    if(matrix[i][j] != matrix[i+x][j+x]){
                        return false;
                    }
                    x++;
                }
            }
        }
        return true;
        
    }
};