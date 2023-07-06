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
    int count(TreeNode*node,int&result)
    {
        if(node == nullptr)
        {
            return 0;
        }
        result++;
        count(node->left,result);
        count(node->right,result);
        return result;
    }
    int countNodes(TreeNode* root) {
        int result=0;
        count(root,result);
        return result;
    }
};