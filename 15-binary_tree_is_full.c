#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - full or not
 *
 * @tree: Pointer to the tree
 *
 * Return: 1 or 0
 */
int node_is_full(const binary_tree_t *tree)
{
 if (tree == NULL)
        return 1;

    if ((tree->left == NULL && tree->right == NULL) ||
        (tree->left != NULL && tree->right != NULL))
        return 1;

    return 0;
}


int binary_tree_is_full(const binary_tree_t *tree)
{


 if (tree == NULL)
        return 0; 

    if (!node_is_full(tree))
        return 0; 


    return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
}