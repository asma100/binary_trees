#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    binary_tree_t *root;
    size_t depth;

    // Create a sample binary tree
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);

    // Print the tree (assuming binary_tree_print is implemented)
    binary_tree_print(root);

    // Calculate and print depths
    depth = binary_tree_height(root);
    printf("Depth of %d: %zu\n", root->n, depth);  // Use %zu for size_t

    depth = binary_tree_height(root->right);
    printf("Depth of %d: %zu\n", root->right->n, depth);

    depth = binary_tree_height(root->left->right);
    printf("Depth of %d: %zu\n", root->left->right->n, depth);

    return (0);
}