1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    int maxi = 0;
15
16    int height(TreeNode* root) {
17        if (root == nullptr) return 0;
18
19        int lh = height(root->left);
20        int rh = height(root->right);
21
22        maxi = max(maxi, lh + rh);     
23        return 1 + max(lh, rh);        
24    }
25
26    int diameterOfBinaryTree(TreeNode* root) {
27        maxi = 0;
28        height(root);
29        return maxi;
30    }
31};
32