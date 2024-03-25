#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - leaf or not
 *
 * @tree: Pointer to the node

 *
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if(node->left == NULL && node->right == NULL)
    return(1);
    else
    return(0);
}