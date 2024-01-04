#include "binary_trees.h"
/**
 *binary_tree_insert_left - Insert left node to a parent node.
 *@parent: The parent node.
 *@value: The value to assign.
 *Return: New node or the NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	new_node->left = NULL;
	return (new_node);
}
