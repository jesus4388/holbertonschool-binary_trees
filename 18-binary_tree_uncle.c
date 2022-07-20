#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to parent
 * Return: pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent->parent)
	{
		if (node->parent->parent->right == NULL || node->parent->parent->left == NULL)
			return (NULL);
		if (node->parent == node->parent->parent->right)
			return (node->parent->parent->left);
		else
			return (node->parent->parent->right);
	}
	else
		return (NULL);
	return (0);
}
