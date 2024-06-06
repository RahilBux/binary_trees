#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node given
 * @node: Node to find the sibling of
 *
 * Return: Node of the sibling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right == NULL)
			return (NULL);
		return (node->parent->right);
	}
	else
	{
		if (node->parent->left == NULL)
			return (NULL);
		return (node->parent->left);
	}
}
