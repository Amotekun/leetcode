#include "treenode.hpp"

class Solution {
   public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left, root->right);
    };

    bool isMirror(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;
        if (!p || !q) return false;

        return p->val == q->val && isMirror(p->left, q->right) &&
               isMirror(p->right, q->left);  // ✅ real mirrored match
    }
};