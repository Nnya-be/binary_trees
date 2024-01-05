#include "binary_trees.h"

/**
 * enqueue - Enqueues a binary tree node in the queue
 * @front: Double pointer to the front of the queue
 * @node: Pointer to the binary tree node to enqueue
 */
void enqueue(queue_node_t **front, const binary_tree_t *node)
{
queue_node_t *new_node = malloc(sizeof(queue_node_t));
if (new_node == NULL)
exit(EXIT_FAILURE);
new_node->node = node;
new_node->next = NULL;

if (*front == NULL)
*front = new_node;
else
{
queue_node_t *temp = *front;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
}

/**
 * dequeue - Dequeues a binary tree node from the queue
 * @front: Double pointer to the front of the queue
 * Return: Pointer to the dequeued binary tree node
 */
const binary_tree_t *dequeue(queue_node_t **front)
{
if (*front == NULL)
return (NULL);

const binary_tree_t *node = (*front)->node;
queue_node_t *temp = *front;
*front = (*front)->next;
free(temp);

return (node);
}

/**
 * binary_tree_levelorder - Performs level-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

queue_node_t *front = NULL;

enqueue(&front, tree);

while (front != NULL)
{
const binary_tree_t *current = dequeue(&front);
func(current->n);

if (current->left != NULL)
enqueue(&front, current->left);

if (current->right != NULL)
enqueue(&front, current->right);
}
}
