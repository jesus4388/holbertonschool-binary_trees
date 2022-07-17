#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the left-child
 * @parent: pointer to node
 * @value: int
 * Return: pointer a new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *head = NULL;
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(new, value);
	if (new == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = new;
		new->parent = parent;
		head = parent;
	}
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		new->parent = parent;
		parent->right = new;
		head = new;
	}
	return (head);
}
