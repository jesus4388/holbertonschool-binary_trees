#include "binary_trees.h"
/**
 * binary_tree_heig - size binary of tree
 * @tree: pointer
 * Return: 1 or 0
 */
size_t binary_tree_heig(const binary_tree_t *tree)
{
	int i = 0;
	int b = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	i = 1 + binary_tree_heig(tree->left);
	b = 1 + binary_tree_heig(tree->right);

	if (b < i)
		return (i);
	return (b);
}
/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to root
 * Return: balance of node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	a = binary_tree_heig(tree->left);
	b = binary_tree_heig(tree->right);

	a = a - b;
	return (a);
}
