class Solution {
public:
    
    bool DFS(int current, int destination, unordered_map<int, vector<int>> &map, vector<bool> &visited) { //call by reference 
        if(current == destination) return true;
        for(int i = 0; i < map[current].size(); i++) {
            if(visited[map[current][i]] == false) {
                visited[current] = true;
                if(DFS(map[current][i], destination, map, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
    
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> map;
        vector<bool> visited(n);
        for(int i = 0; i < edges.size(); i++) {
            map[edges[i][0]].push_back(edges[i][1]);
            map[edges[i][1]].push_back(edges[i][0]);
        }
        visited[source] = true;
        return DFS(source, destination, map, visited);
    }
};
