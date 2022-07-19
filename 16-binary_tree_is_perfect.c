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
	if (tree->left->left == NULL && tree->right->right != NULL)
		return (0);
	if (tree->left->left == NULL && tree->right->left != NULL)
                return (0);
	if (tree->left->left != NULL && tree->right->right == NULL)
		return (0);
	if (tree->left->right != NULL && tree->right->right == NULL)
                return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left->left == NULL && tree->right->right == NULL)
		return (1);
	i = 1 + binary_tree_heig(tree->left);
	b = 1 + binary_tree_heig(tree->right);

	if (b < i)
		return (i);
	return (b);
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
		return (0);
	a = binary_tree_heig(tree->left);
	b = binary_tree_heig(tree->right);

	if (a == b)
		return (1);
	return (0);
}
