struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    void helper(TreeNode*node,string path, vector<string> & paths)
    {
        if(node==nullptr)
        {
            return;
        }
        if(node!=nullptr)
        {
            path+=to_string(node->val);
        }
        if(node->left==nullptr && node->right==nullptr)
        {
            paths.push_back(path);
        }
        else
        {
            path+="->";
            helper(node->left,path,paths);
            helper(node->right,path,paths);
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        helper(root,"",result);
        return result;
    }
};