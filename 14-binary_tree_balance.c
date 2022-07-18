#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to root
 * Return: balance of node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		i = -1;
	if (tree->left == NULL && tree->right == NULL)
		i = 0;
	if (tree->left != NULL && tree->right != NULL)
		i = 2;
	return (i);
}
