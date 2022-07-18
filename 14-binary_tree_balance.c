#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to root
 * Return: balance of node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return(0);
	a = 1 + binary_tree_balance(tree->left) - binary_tree_balance(tree->right);
	return (a);
}
