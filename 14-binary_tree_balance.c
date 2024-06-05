#include "binary_trees.h"

/**
 * binary_tree_height_y - Gets the height of a binary tree
 * @tree - Pointer to the root of the tree
 *
 * Return: Height of tree or 0
 */

int binary_tree_height_y(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height_y(tree->left) : 1;
	right = tree->right ? 1 + binary_tree_height_y(tree->right) : 1;

	return ((left > right) ? left : right);
}


/**
 * binary_tree_balance - Measures the balance factor of
 * a tree (left height - right height)
 * @tree: Pointer to the root Node of tree
 *
 * Return: Left height - Right height or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, balance = 0;

	if (tree == NULL)
		return (0);

	left = ((int)binary_tree_height_y(tree->left));
	right = ((int)binary_tree_height_y(tree->right));

	balance = left - right;
	return (balance);
}
