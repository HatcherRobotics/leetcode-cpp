struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
#include<vector>
using namespace std;

class Solution {
public:
    void traver(TreeNode*cur,vector<int>& vec)
    {
        if(cur==nullptr)
        {
            return;
        }
        traver(cur->left,vec);//左
        traver(cur->right,vec);//右
        vec.push_back(cur->val);//中

    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        traver(root,result);
        return result;
    }
};