#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - the height
 *
 * @tree: Pointer to the tree node
 *
 *
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree) {
  if (tree == NULL) {
    return 0;  // Base case: empty tree or NULL node has depth 0
  }

  // Check if the node is a leaf
  if (tree->left == NULL && tree->right == NULL) {
    return 1;  // Leaf node has depth 1 (at its level)
  }

  // Recursively calculate the depths of the left and right subtrees
  size_t left_depth = binary_tree_depth(tree->left);
  size_t right_depth = binary_tree_depth(tree->right);

  // Return the maximum depth of its children + 1 (for current level)
  return (left_depth > right_depth) ? left_depth + 1 : right_depth + 1;
}

