#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - the height
 *
 * @tree: Pointer to the tree node
 *
 *
 * Return: size_t
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_height, right_height, balance;

if (tree == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
balance = left_height - right_height;
return (balance);
}
