add_library(tree_solutions
    94_binary_tree_inorder_traversal.cpp
    100_same_tree.cpp
    101_symmetric_tree.cpp
    104_maximum_depth_of_binary_tree.cpp
    108_sorted_array_to_bst.cpp

)

# << this line makes the header visible >>
target_include_directories(tree_solutions PUBLIC ${CMAKE_SOURCE_DIR}/utils)
