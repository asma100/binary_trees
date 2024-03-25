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

  // Recursively calculate the depth of the left and right subtrees
  size_t left_depth = binary_tree_depth(tree->left);
  size_t right_depth = binary_tree_depth(tree->right);

  // Return the maximum depth + 1, as the current node adds a level
  return (left_depth > right_depth) ? left_depth + 1 : right_depth + 1;
}
