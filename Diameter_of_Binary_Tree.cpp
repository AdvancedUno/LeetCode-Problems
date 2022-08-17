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
    int maxNum = 0;
    int depthOfTree(TreeNode* node) {

        if (!node)return 0;

        int left = depthOfTree(node->left);
        int right = depthOfTree(node->right);

        if (maxNum < left + right) {
            maxNum = left + right;
        }

        return max(left, right) + 1;



    }


    int diameterOfBinaryTree(TreeNode* root) {


        int left = depthOfTree(root->left);
        int right = depthOfTree(root->right);

        if (maxNum < left + right) {
            maxNum = left + right;
        }
        return maxNum;

    }
};