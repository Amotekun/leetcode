#include <gtest/gtest.h>
#include "../../solutions/trees/108_sorted_array_to_bst.cpp"
#include "treenode.hpp"

// Helper to collect inorder traversal
void inorderTraversal(TreeNode* root, std::vector<int>& out) {
    if (!root) return;
    inorderTraversal(root->left, out);
    out.push_back(root->val);
    inorderTraversal(root->right, out);
}

TEST(SortedArrayToBSTTest, BalancedBST) {
    std::vector<int> input = {-10, -3, 0, 5, 9};

    Solution sol;
    TreeNode* root = sol.sortedArrayToBST(input);

    std::vector<int> actualInorder;
    inorderTraversal(root, actualInorder);

    EXPECT_EQ(actualInorder, input);  // Inorder of BST should match sorted input
}

TEST(SortedArrayToBSTTest, SingleElement) {
    std::vector<int> input = {42};

    Solution sol;
    TreeNode* root = sol.sortedArrayToBST(input);

    ASSERT_NE(root, nullptr);
    EXPECT_EQ(root->val, 42);
    EXPECT_EQ(root->left, nullptr);
    EXPECT_EQ(root->right, nullptr);
}

TEST(SortedArrayToBSTTest, EmptyArray) {
    std::vector<int> input = {};

    Solution sol;
    TreeNode* root = sol.sortedArrayToBST(input);

    EXPECT_EQ(root, nullptr);
}
