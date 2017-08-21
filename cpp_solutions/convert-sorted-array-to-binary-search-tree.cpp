//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
// Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
            if(nums.size() == 0) return NULL;
            if(nums.size() == 1) return new TreeNode(nums[0]);
        
            int mid = nums.size()/2;
            TreeNode* root = new TreeNode(nums[mid]);
            
            vector<int> l(nums.begin(),nums.begin()+mid);
            vector<int> r(nums.begin()+mid+1,nums.end());
            
            root->right = sortedArrayToBST(r);
            root->left = sortedArrayToBST(l); 
            
            return root;
    }
};
