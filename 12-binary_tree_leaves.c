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
size_t leaves = 0;
int leaf;
leaf = binary_tree_is_leaf;
leaves = leaves + leaf;
binary_tree_leaves(tree->left);
binary_tree_leaves(tree->right);
binary_tree_leaves(tree);
}
