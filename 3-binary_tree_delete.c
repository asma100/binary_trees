#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - delete
 *
 * @root: Pointer to the node to print
 *
 * Return: binary_tree_t
 */
void binary_tree_delete(binary_tree_t *root)
{
if (root == NULL)
return;
binary_tree_delete(root->left);
binary_tree_delete(root->right);
free(root);
}
