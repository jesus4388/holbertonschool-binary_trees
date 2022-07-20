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
	{
		i -= 1;
		i *= 2;
		return (i + 1);
	}
	else
	{
		b -= 1;
		b *= 2;
		return (b + 1);
	}
	return (0);
}
/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to node
 * Return: 0 or size
 */
size_t binary_size(const binary_tree_t *tree)
{
	int a = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	a = 1 + binary_size(tree->left) +  binary_size(tree->right);
	return (a);
}
/**
 * binary_tree_is_perfect - measures the balance factor
 * @tree: pointer to root
 * Return: balance of node
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	b = binary_size(tree);
	a = binary_tree_heig(tree);
	if (b == a)
		return (1);
	return (0);
}
