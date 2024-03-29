#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (tree == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
if (tree && tree->right == NULL && tree->left == NULL)
return (0);
return ((left_height > right_height ? left_height : right_height) +1);
}

/**
 * binary_tree_size - Measures the size (number of nodes) of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
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

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	perfect_size = power(2.0, height) - 1;
	return (size == perfect_size);
}
/**
 *power - Calculates the exponential.
 *@base: The base.
 *@expo: The exponent.
 *Return: The calculated value.
 */
double power(double base, int expo)
{
	double result = 1.0;

	for (int i = 0; i < expo; ++i)
		result *= base;
	return (result);
}
