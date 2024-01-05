#include "binary_trees.h"
/**
 *binary_tree_sibling - Finds the sibling of a node.
 *@node : The node to find the sibling to.
 *Return: Return the pointer to the node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
