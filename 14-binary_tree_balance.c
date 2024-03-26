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
if (tree->left)
left_height = 1 + binary_tree_balance(tree->left);
else
left_height = 0;
if (tree->right)
right_height = 1 + binary_tree_balance(tree->right);
else
right_height = 0;
balance = left_height - right_height;
return (balance);
}
