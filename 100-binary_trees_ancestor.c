#include "binary_trees.h"
/**
 *binary_trees_ancestor  Finds the lowest common ancestor of two nodes.
 *@first: A pointer to the first node.
 *@second: A pointer to the second node.
 *Return: The lowest common ancestor node of two given nodes or NUll in error.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (is_ancestor(first, second))
		return ((binary_tree_t *)first);
	if (is_ancestor(second, first))
		return ((binary_tree_t *)second);
	return (find_common_ancestor(first->parent, second->parent));
}
/**
 *is_ancestor - Check if node is an ancestor of next node.
 *@node_1: Pointer to the ancestor node to be.
 *@node_2: Pointer to the potential descendant node.
 *Return: 1 if node is an ancestor of node 2, 0 otherwise.
 */
int is_ancestor(const binary_tree_t *node_1, const binary_tree_t *node_2)
{
	if (node_1 == node_2)
		return (1);
	if (!node_2)
		return (0);
	return (is_ancestor(node_1, node_2->parent));
}
/**
 *find_common_ancestor - Finds the lowest common ancestor of two nodes.
 *@node_1: pointer to the first node.
 *@node_2: pointet to the second node.
 *Return: Pointer to the lowest common ancestor node.
 */
binary_tree_t *find_common_ancestor(const binary_tree_t *node_1, const binary_tree_t *node_2)
{
	if (!node_1)
		return (NULL);
	if (is_ancestor(node_1, node_2))
		return ((binary_tree_t *)node_1);

	return (find_common_ancestor(node_1->parent, node_2));
}
