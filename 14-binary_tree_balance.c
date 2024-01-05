#include "binary_trees.h"
/**
 *binary_tree_balance - Check if the tree balanced factor.
 *@tree: The tree to check.
 *Return: 0 if it is a null tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return ((int)(left_height - right_height));
}

/**
 *binary_tree_height - Measures the height of the tree.
 *@tree: The tree pointer.
 *Return: height of the binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
