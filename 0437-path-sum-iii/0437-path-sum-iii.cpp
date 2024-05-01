/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void fxn(TreeNode* node, int targetSum, long & ans, map<long,long> & st,long currSum){
        if(node==NULL){
            return;
        }
        int val = node->val;
        currSum+=val;
        // check if there is a prefix sum of 1st k nodes in current path such that sum of k nodes = currsum-targetSum => this will indicate if we remove that 1st k nodes we can get the desired target sum. 
        if(st.find(-targetSum+currSum)!=st.end()){
            ans+=st[-targetSum+currSum];
        } 
        if(targetSum==currSum){
            ans+=1;
        }
        // st[currSum]=> denoted count of path with prefix sum i.e sum of 1st k nodes as currSum
        st[currSum]++;
        fxn(node->left, targetSum, ans, st,currSum);
        fxn(node->right, targetSum, ans, st,currSum);
        st[currSum]--;
        currSum-=val;
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
        map<long,long>st;
        long ans =0;
        fxn(root, targetSum, ans, st,0);
        return ans;
    }
};