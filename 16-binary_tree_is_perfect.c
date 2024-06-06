#include "binary_trees.h"

/**
 * is_perfect - Checks if a tree is perfect or not
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 if not perfect or other number
 */
int is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + is_perfect(tree->left);
		right = 1 + is_perfect(tree->right);
		if (right == 1 && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - Checks if the binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
		return (0);

	else
	{
		result = is_perfect(tree);
		if (result != 0)
			return (1);
		return (0);
	}
}
