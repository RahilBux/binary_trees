#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Root node of the tree to measure the size
 *
 * Return: size of tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t size = 1;

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
