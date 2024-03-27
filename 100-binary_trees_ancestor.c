#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
const binary_tree_t *ancestor;

if (first == NULL || second == NULL)
return NULL;

ancestor = first;
while (ancestor)
{
if (is_ancestor(ancestor, second))
return (binary_tree_t *)ancestor;
ancestor = ancestor->parent;
}

return NULL;
}

/**
 * is_ancestor -  if  ancestor of another
 * @ancestor:  ancestor 
 * @node: node to checked
 *
 * Return: 1  , 0 
 */
int is_ancestor(const binary_tree_t *ancestor, const binary_tree_t *node)
{
if (node == NULL)
return 0;

if (ancestor == node)
return 1;

return (is_ancestor(ancestor, node->left) || 
is_ancestor(ancestor, node->right));
}
