class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL)
            return ;
        flatten(root->left);
        if(root->left != NULL){
            TreeNode *node= root->right;
            root->right=root->left;
            root->left=NULL;
            TreeNode *temp=root;
            while(temp->right != NULL){
                temp= temp->right;
            }
            temp->right = node;
        }
        flatten(root->right);
    }
};