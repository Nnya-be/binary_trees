#include "binary_trees.h"
#include <math.h>
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    /* Check if tree is NULL */
    if (tree == NULL)
        return 0;

    /* Recursively calculate the height of the left and right subtrees */
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* Return the maximum height of the left and right subtrees, plus 1 for the current level */
    return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * binary_tree_size - Measures the size (number of nodes) of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    /* Check if tree is NULL */
    if (tree == NULL)
        return 0;

    /* Recursively calculate the size of the left and right subtrees */
    return 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, size, perfect_size;

    /* Check if tree is NULL */
    if (tree == NULL)
        return 0;

    /* Calculate the height of the tree */
    height = binary_tree_height(tree);

    /* Calculate the size of the tree */
    size = binary_tree_size(tree);

    /* Calculate the perfect size of a perfect binary tree with the same height */
    perfect_size = pow(2, height) - 1;

    /* Check if the tree's size is equal to the perfect size */
    return size == perfect_size;
}
