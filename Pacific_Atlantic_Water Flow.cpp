//https://leetcode.com/problems/pacific-atlantic-water-flow/

class Solution
{
    vector<vector<int> > pacific;
    vector<vector<int>> result;
    vector<int> path = { 1, 0, -1, 0, 1 };
    bool artic = false;
    bool paci = false;
    int cnt = 0;
    public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights)
    {
        
        pacific = vector<vector<int> >(heights.size(), vector<int>(heights[0].size(), 0));
        
        for (int i = 0; i < heights[0].size(); i++)
        {
            solve(heights, pacific, heights.size()-1, i);
            solve(heights, pacific, 0, i);
        }
        for (int i = 0; i < heights.size(); i++)
         {
            solve(heights,pacific, i, heights[0].size()-1);
            solve(heights,pacific, i, 0);
         }


        return result;


    }

    bool solve(vector<vector<int>>& heights, vector<vector<int>>& visited, int first, int second){
        int verti;
        int hori;
        
        
        
        visited[first][second]++;
        
        if(visited[first][second] > 3){
            vector<int> temp;   
            temp.push_back(first);
            temp.push_back(second);
            result.push_back(temp);
            return true;
        }
        

        for (int i = 0; i < 4; i++)
        {
            verti = path[i] ;
            hori = path [i+1];
            if(first + verti < heights.size() && second + hori < heights[0].size() && first + verti >=0 && second + hori >= 0){
                if(heights[first][second] <= heights[first + verti][second + hori]){
                  solve(heights,visited, first + verti, second + hori);   
                }
            }
        }
        return false;
    

    }


};
