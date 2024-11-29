class Solution {
public:
    void helper(int node, vector<vector<int>> &graph, vector<vector<int>> &result, vector<int> &temp){
        if(node==graph.size()-1){
            result.push_back(temp);
            return;
        }
        for(auto it : graph[node]){
            temp.push_back(it);
            helper(it,graph,result,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> temp={0};
        vector<vector<int>> result;
        helper(0,graph,result,temp);
    return result;
    }
};