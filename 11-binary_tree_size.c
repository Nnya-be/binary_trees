#include "binary_trees.h"
/**
 * binary_tree_size - compute the size of BT recursively
 * @tree: pointer to the node of ze tree
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + left + right);
}
