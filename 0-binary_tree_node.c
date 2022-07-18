#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to node
 * @value: int
 * Return: pointer a new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *head = parent;
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new)
	{
		new->parent = parent;
		new->n = value;
		new->left = NULL;
		new->right = NULL;
		return (new);
	}
	else
		return (NULL);
}
