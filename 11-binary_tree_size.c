#include "binary_trees.h"
/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to node
 * Return: 0 or size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int a = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	a = 1 + binary_tree_size(tree->left) +  binary_tree_size(tree->right);
	return (a);
}
