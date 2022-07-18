#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to node
 * Return: 0 or null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int a = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	a = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (a);
}
