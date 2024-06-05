#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if the binary tree is a full tree
 * @tree: Pointer to the root of tree
 *
 * Return: 1 if it is a full tree else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (left == 0 || right == 0)
			return (0);

		return (1);
	}
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (0);
}
