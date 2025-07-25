# Include GoogleTest macros first (REQUIRED)
include(GoogleTest)

# First test: Inorder Traversal (94)
add_executable(test_inorder test_94_inorder.cpp)
target_link_libraries(test_inorder gtest_main tree_solutions)
target_include_directories(test_inorder PRIVATE ${CMAKE_SOURCE_DIR}/utils)
gtest_discover_tests(test_inorder)

# Second test: Same Tree (100)
add_executable(test_same_tree test_100_same_tree.cpp)
target_link_libraries(test_same_tree gtest_main tree_solutions)
target_include_directories(test_same_tree PRIVATE ${CMAKE_SOURCE_DIR}/utils)
gtest_discover_tests(test_same_tree)

# Third test: Symmetric tree (101)
add_executable(test_symmetric_tree test_101_symmetric_tree.cpp)
target_link_libraries(test_symmetric_tree gtest_main tree_solutions)
target_include_directories(test_symmetric_tree PRIVATE ${CMAKE_SOURCE_DIR}/utils)
gtest_discover_tests(test_symmetric_tree)

# Fourth test: Max Depth (104)
add_executable(test_max_depth test_104_max_depth.cpp)
target_link_libraries(test_max_depth gtest_main tree_solutions)
target_include_directories(test_max_depth PRIVATE ${CMAKE_SOURCE_DIR}/utils)
gtest_discover_tests(test_max_depth)

# Fifth test: Sorted Array to BST (108)
add_executable(test_sorted_array_to_bst test_108_sorted_array_to_bst.cpp)
target_link_libraries(test_sorted_array_to_bst gtest_main tree_solutions)
target_include_directories(test_sorted_array_to_bst PRIVATE ${CMAKE_SOURCE_DIR}/utils)
gtest_discover_tests(test_sorted_array_to_bst)

