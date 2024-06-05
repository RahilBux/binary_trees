#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of
 * a tree (left height - right height)
 * @tree: Pointer to the root Node of tree
 *
 * Return: Left height - Right height or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = (tree->left != NULL) ? 1 + binary_tree_balance(tree->left) : 0;
	right = (tree->right != NULL) ? 1 + binary_tree_balance(tree->right) : 0;

	return (left - right);
}
