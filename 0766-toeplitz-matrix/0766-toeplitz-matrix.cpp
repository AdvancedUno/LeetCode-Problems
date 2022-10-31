class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        for(int i = 0; i < matrix.size(); i ++){
            
            for(int j = 0; j < matrix[i].size(); j ++){
                int x = j+1;
                int y = i+1;
                while(y < matrix.size() && x < matrix[i].size()){
                    if(matrix[i][j] != matrix[y][x]){
                        return false;
                    }
                    y++;
                    x++;
                }
            }
            
            
            
            
        }
        
        
        return true;
        
    }
};