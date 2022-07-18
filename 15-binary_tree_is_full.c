#include "binary_trees.h"
/**
 * binary_tree_is_full - check is full
 * @tree: pointer to root
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int a = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		a = binary_tree_is_full(tree->left);
		a = binary_tree_is_full(tree->right);
	}
	return (a);
}
