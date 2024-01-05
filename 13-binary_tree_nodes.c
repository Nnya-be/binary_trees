#include "binary_trees.h"
/**
 *binary_tree_nodes - Count nodes with at least 1 child.
 *@tree: The binary tree to count.
 *Return: Number of nodes with at least 1 child or NUll if none.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
