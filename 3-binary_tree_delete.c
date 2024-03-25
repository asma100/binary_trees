#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - delete
 *
 * @tree: Pointer to the node to print
 *
 * Return: binary_tree_t
 */
void binary_tree_delete(binary_tree_t *tree)
{
binary_tree_t *i;

for (i = tree; i->left == NULL; i = i->left)
{
if (i->left == NULL)
delete_node(i);
}
for (i = tree; i->right == NULL; i = i->right)
{
if (i->right == NULL)
delete_node(i);
}
delete_node(tree);
}
void delete_node (binary_tree_t *node)
{
if (node->left)
free(node->left);
node->left = NULL;
if (node->right)
free(node->right);
node->right = NULL;
free(node);
}
