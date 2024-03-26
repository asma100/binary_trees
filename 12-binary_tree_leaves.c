#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"



/**
 * binary_tree_size - the size
 *
 * @tree: Pointer to the tree node
 *
 *
 * Return: size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
 {
  if (tree == NULL) {
    return 0;
  }

  size_t leaves = 0;
  leaves += binary_tree_is_leaf(tree);  // Call the function to check current node
  leaves += binary_tree_leaves(tree->left);
  leaves += binary_tree_leaves(tree->right);

  return leaves;
}
