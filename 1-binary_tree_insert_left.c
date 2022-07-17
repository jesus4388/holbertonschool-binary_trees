#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: pointer to node
 * @value: int
 * Return: pointer a new node or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *head = NULL;
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(new, value);
	if (new == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		new->parent = parent;
		parent->left = new;
		head = new;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		new->parent = parent;
		parent->left = new;
		head = new;
	}
	return (head);
}
