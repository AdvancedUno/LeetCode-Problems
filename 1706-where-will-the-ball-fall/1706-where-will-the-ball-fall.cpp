class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {

        vector<int> iBallVec (grid[0].size());
        int iCols = grid[0].size();
        int iRows = grid.size();
        int iStore[iRows][iCols];


        for(int i =0; i < iRows; i ++){
            for(int j = 0; j < iCols; j++){
                if(grid[i][j] == 1 && j < (iCols-1) && grid[i][j+1] == 1){
                    iStore[i][j] = 1;
                }else if (grid[i][j] == -1 && j > 0 && grid[i][j-1] == -1){
                    iStore[i][j] = 1;
                }
                else{
                    iStore[i][j] = 0;
                }

		       // if(j == 0 && i > 0 && grid[i][j] != grid[i-1][j]){
                 //   iStore[i][j] = 1;
                //}else if(j== iCols-1 && i > 0 && grid[i][j] != grid[i-1][j]){
                  //  iStore[i][j] = 1;
                //}
            }
            
        }


        for(int i = 0; i < iBallVec.size(); i ++){
            int iPos = i;
            int iLevel =0;
            int iResult;
            while(iLevel <  iRows){

                if(iStore[iLevel][iPos] == 1){
                    iPos += grid[iLevel][iPos];
                    iLevel ++;
                }
                else{
                    iResult = -1;
                    break;
                }
                iResult = iPos;
            }

            iBallVec[i] = iResult;
        }

        return iBallVec;
        
    }
};