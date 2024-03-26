#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_child - child or not
 *
 * @node: Pointer to the node
 *
 * Return: 1 or 0
 */
int binary_tree_is_child(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->left == NULL && node->right == NULL)
return (0);
else
return (1);
}

/**
 * binary_tree_nodes - the child count
 *
 * @tree: Pointer to the tree node
 *
 *
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t leaves = 0;

if (tree == NULL)
return (0);
leaves += binary_tree_is_child(tree);
leaves += binary_tree_leaves(tree->left);
leaves += binary_tree_leaves(tree->right);
return (leaves);
}