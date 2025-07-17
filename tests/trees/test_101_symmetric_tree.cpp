#include <gtest/gtest.h>
#include "../../solutions/trees/101_symmetric_tree.cpp"
#include "treenode.hpp"

TEST(SymmetricTreeTest, SymmetricTree) {
    TreeNode* left = new TreeNode(2, new TreeNode(3), new TreeNode(4));
    TreeNode* right = new TreeNode(2, new TreeNode(4), new TreeNode(3));
    TreeNode* root = new TreeNode(1, left, right);

    Solution sol;
    EXPECT_TRUE(sol.isSymmetric(root));
}

TEST(SymmetricTreeTest, AsymmetricTree) {
    TreeNode* left = new TreeNode(2, nullptr, new TreeNode(3));
    TreeNode* right = new TreeNode(2, nullptr, new TreeNode(3));
    TreeNode* root = new TreeNode(1, left, right);

    Solution sol;
    EXPECT_FALSE(sol.isSymmetric(root));
}

TEST(SymmetricTreeTest, SingleNodeTree) {
    TreeNode* root = new TreeNode(1);
    Solution sol;
    EXPECT_TRUE(sol.isSymmetric(root));
}

TEST(SymmetricTreeTest, NullTree) {
    Solution sol;
    EXPECT_TRUE(sol.isSymmetric(nullptr));
}
