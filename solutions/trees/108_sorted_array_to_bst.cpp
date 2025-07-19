#include <vector>
#include "treenode.hpp"

class Solution {
   public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums) { return buildTree(nums, 0, nums.size() - 1); }

   private:
    TreeNode* buildTree(const std::vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;

        int mid = left + (right - left) / 2;  // prevent overflow
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = buildTree(nums, left, mid - 1);
        root->right = buildTree(nums, mid + 1, right);

        return root;
    }
};