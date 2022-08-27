// https://leetcode.com/problems/course-schedule-ii/



class Solution {
public:

    
    vector<int> ans;
    
    queue<int> qSave;
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> graph[2000];
        vector<int> indegree(numCourses, 0);

        for (int i = 0; i < prerequisites.size(); i++) {

            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]] ++;
        
        }

        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                qSave.push(i);
            }
        }

        while (!qSave.empty()) {
            int start = qSave.front();
            qSave.pop();
            ans.push_back(start);
            for (int i = 0; i < graph[start].size(); i++) {
                indegree[graph[start][i]]--;
                cout << indegree[graph[start][i]] << endl;
                if (indegree[graph[start][i]] == 0) {
                    qSave.push(graph[start][i]);
                }
            }
        }
        if (ans.size() == numCourses)return ans;
        else return vector<int>();

    }
};

