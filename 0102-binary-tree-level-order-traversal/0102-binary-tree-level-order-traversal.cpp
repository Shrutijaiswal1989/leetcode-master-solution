# ***1. Recursive***
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
public:
    vector<vector<int>> LevelOrderTraversal;
    
    void levelOrder(TreeNode* root, int depth) {
        if(root == nullptr) return;
        
        // if current level does not have a vector, then create one
        if (LevelOrderTraversal.size() == depth)
            LevelOrderTraversal.push_back(vector<int>());
        
        // add current node to the vector
        LevelOrderTraversal[depth].push_back(root->val);
        
        // recrusion left and right, depth +1
        levelOrder(root->left, depth + 1);
        levelOrder(root->right, depth + 1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        levelOrder(root, 0);
        return LevelOrderTraversal;
    }
};

# ***2. Queue***
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levelOrderTraversal;
        if(root == nullptr) return levelOrderTraversal;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int levelSize = q.size();
            vector<int> currentLevel;
            
            for(int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                currentLevel.push_back(node->val);
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            
            levelOrderTraversal.push_back(currentLevel);
        }
        
        return levelOrderTraversal;
    }
};
