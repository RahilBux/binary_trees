#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a tree using in-order traversal
 * @tree: Pointer to the root of tree
 * @func: Pointer to a function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
