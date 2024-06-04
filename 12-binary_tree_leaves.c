#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves in a binary tree
 * @tree: Pointer to the root of tree
 *
 * Return: Number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_leaves(tree->left);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	right = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves = left + right;
	return (leaves);
}
