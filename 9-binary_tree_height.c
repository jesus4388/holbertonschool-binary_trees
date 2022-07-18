#include "binary_trees.h"
/**
 * binary_tree_height - size binary of tree
 * @tree: pointer
 * Return: 1 or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int i = 0;
	int b = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	i = 1 + binary_tree_height(tree->left);
	b = 1 + binary_tree_height(tree->right);

	if (b < i)
		return (i);
	return (b);
}
