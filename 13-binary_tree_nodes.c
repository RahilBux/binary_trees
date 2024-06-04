#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child
 * @tree: Pointer to the root of tree
 *
 * Return: Count of nodes with at least one child or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count += ((tree->left != NULL || tree->right != NULL) ? 1 : 0);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
