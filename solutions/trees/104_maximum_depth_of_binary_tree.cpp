#include <algorithm>
#include "treenode.hpp"

class Solution {
   public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int leftDepth = maxDepth(root->left);
        int rightDept = maxDepth(root->right);
        return 1 + std::max(leftDepth, rightDept);
    }
};