#include "binary_trees.h"
/**
 *binary_tree_uncle - Finds the uncle node.
 *@node: The node to search for it's uncle.
 *Return: A pointer to the node or null if it fails.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 *binary_tree_sibling - Finds the sibling node.
 *@node: The node to search.
 *Return: Pointer to the sibling node or NULL if it fails.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
