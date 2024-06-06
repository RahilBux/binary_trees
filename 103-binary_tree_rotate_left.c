#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotates a binary tree to the left
 * @tree: Pointer to the root node
 * Return: Pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *p;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	p = tree->right;
	tree->right = p->left;
	if (p->left != NULL)
		p->left->parent = tree;
	p->left = tree;
	p->parent = tree->parent;
	tree->parent = p;
	return (p);
}
