#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
    



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


if (tree == NULL)
return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);

}