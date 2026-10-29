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
    void solve(TreeNode* root, string& path,
               vector<string>& ans) {

        if (root == nullptr)
            return;

        int oldSize = path.size();

        if (!path.empty())
            path += "->";

        path += to_string(root->val);

        if (root->left == nullptr && root->right == nullptr) {
            ans.push_back(path);
        } else {
            solve(root->left, path, ans);
            solve(root->right, path, ans);
        }

        path.resize(oldSize);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path = "";

        solve(root, path, ans);

        return ans;
    }
};