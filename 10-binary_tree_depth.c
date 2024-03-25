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
size_t tree_height;
size_t depth;
if (tree == NULL)
return 0;
size_t tree_height = binary_tree_height(tree);
depth = tree_height - binary_tree_height(tree->left) - binary_tree_height(tree->right) + 1;
return (depth);
}