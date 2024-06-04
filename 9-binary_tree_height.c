#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the tree
 * @tree: Pointer to the root of the tree
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (right > left)
		return (right);
	else if (right < left)
		return (left);
	else
		return (right);
}
