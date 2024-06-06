#include "binary_trees.h"

/**
 * is_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find sibling
 *
 * Return: Pointer to the sibling
 */
binary_tree_t *is_sibling(binary_tree_t *node)
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

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Node to find the uncle of
 *
 * Return: Pointer to the uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL)
		return (NULL);

	uncle = is_sibling(node->parent);
	return (uncle);
}
