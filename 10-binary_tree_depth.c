#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth
 * @tree: pointer to node
 * Return: 0 or depth binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	for (i = 0; tree->parent; i++)
		tree = tree->parent;
	return (i);
}
