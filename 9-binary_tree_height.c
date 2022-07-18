#include "binary_trees.h"
/**
 * binary_tree_height - size binary of tree
 * @tree: pointer
 * Return: 1 or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	int i = 1 + binary_tree_height(tree->left);
	int b = 1 + binary_tree_height(tree->right);
	
	if (b < i)
		return(i);
	return (b);
}
