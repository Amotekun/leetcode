#include <gtest/gtest.h>

#include <vector>

#include "../../solutions/trees/94_binary_tree_inorder_traversal_recursive.cpp"
#include "treenode.hpp"

TEST(InorderTraversalTest, BasicCase) {
    TreeNode* node3 = new TreeNode(3);
    TreeNode* node2 = new TreeNode(2, node3, nullptr);
    TreeNode* root = new TreeNode(1, nullptr, node2);

    Solution sol;
    std::vector<int> result = sol.inorderTraversal(root);
    std::vector<int> expected = {1, 3, 2};

    EXPECT_EQ(result, expected);
}