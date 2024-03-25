#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height, max;
if (tree == NULL)
return (0);
if (tree->left)
left_height = 1 + binary_tree_height(tree->left);
else
left_height = 0;
if (tree->right)
right_height = 1 + binary_tree_height(tree->right);
else
right_height = 0;
if (left_height > right_height)
max = left_height;
else
max = right_height;
return (max);

}


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
tree_height = binary_tree_height(tree);
depth = tree_height - binary_tree_height(tree->left) - binary_tree_height(tree->right) + 1;
return (depth);
}