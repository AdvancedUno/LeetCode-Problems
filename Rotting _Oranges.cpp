class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int day = 0;
        int cnt = 0;
        queue<pair<pair<int, int>, int>> saveQueue;
        

        for(int i = 0; i < grid.size(); i ++){
            for(int j = 0; j < grid[i].size(); j ++){
                if(grid[i][j] == 2){
                    saveQueue.push(make_pair(make_pair(i,j),0));
                    cnt ++;
                }
                if(grid[i][j] == 0){
                    cnt++;
                }
            }
        }
        
        
        
        
        while(!saveQueue.empty()){
            
            int iPosY = saveQueue.front().first.first;
            int iPosX = saveQueue.front().first.second;
            int currentDay = saveQueue.front().second;
            saveQueue.pop();
            

            if(grid[iPosY][iPosX] == 1){
                grid[iPosY][iPosX] = 2;
                day = currentDay;
                cnt++;
            }
            else if(grid[iPosY][iPosX] == 0){
                continue;
            }
            
            if((iPosY-1) >= 0 && grid[iPosY-1][iPosX] == 1){
                saveQueue.push(make_pair(make_pair(iPosY-1, iPosX),currentDay +1));
            }
           
            if((iPosY+1) < grid.size() && grid[iPosY+1][iPosX] == 1){
                saveQueue.push(make_pair(make_pair(iPosY+1, iPosX), currentDay+1));
            }
            
            if((iPosX-1) >= 0 && grid[iPosY][iPosX-1] == 1){
                saveQueue.push(make_pair(make_pair(iPosY, iPosX -1),currentDay+1));
            }
           
            if((iPosX+1) < grid[0].size() && grid[iPosY][iPosX+1] == 1){
                saveQueue.push(make_pair(make_pair(iPosY, iPosX +1),currentDay+1));
            }
            
        }
        
        if(cnt != grid.size()*grid[0].size()){
            return -1;
        }
        
        
        
        return day;
    }
};
