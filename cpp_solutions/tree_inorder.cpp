/*https://leetcode.com/problems/binary-tree-inorder-traversal/#/description*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> *traversal = new vector<int> ();
        inOrder(root, traversal);
        return *traversal;
    }
    void inOrder(TreeNode* root, vector<int>*traversal){
        
        if(root==NULL)
            return;
        inOrder(root->left, traversal);
        traversal->push_back(root->val);
        inOrder(root->right, traversal);
    }
};
