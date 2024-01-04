#include "binary_trees.h"
/**
 *binary_tree_insert_right - Insert a right child to another node.
 *@parent: parent node.
 *@value: Value of the node.
 *Return: Null on failure else the pointer to the node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node || !parent)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
