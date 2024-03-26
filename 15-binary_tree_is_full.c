#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * node_is_full - Checks if a node is full (has either zero or two children).
 * @tree: Pointer to the node.
 * Return: 1 if full, 0 otherwise.
 */
int node_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 1; // An empty subtree is considered full

    if ((tree->left == NULL && tree->right == NULL) ||
        (tree->left != NULL && tree->right != NULL))
        return 1; // Node has either 0 or 2 children, so it's full

    return 0; // Node has only one child, so it's not full
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root of the tree.
 * Return: 1 if full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0; // An empty tree is not full

    if (!node_is_full(tree))
        return 0; // If the root is not full, the tree is not full

    // Recursively check if both left and right subtrees are full
    return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
}
