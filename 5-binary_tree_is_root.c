#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - root or not
 *
 * @node: Pointer to the node
 *
 * Return: 1 or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (node->parent == NULL)
return (1);
else
return (0);
}
