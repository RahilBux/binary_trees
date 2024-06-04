#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure depth
 *
 * Return: depth or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth - 1);
}
