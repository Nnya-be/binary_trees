#include "binary_trees.h"
/**
 *binary_tree_is_root - Checks if a node is root.
 *@node: The node to check.
 *Return: 1 if it is root else 0 is returned.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return ((node->parent) ? 0 : 1);
}
