#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that returns the ancestor of two nodes
 * @first: First Node
 * @second: Second Node
 *
 * Return: Ancestor of Nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	binary_tree_t *first_p, *second_p;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	first_p = first->parent;
	second_p = second->parent;

	if (first_p == NULL || first == second_p || (!first_p->parent && second_p))
		return (binary_trees_ancestor(first, second_p));
	else if (second_p == NULL || first_p == second
			|| (!second_p->parent && first_p))
		return (binary_trees_ancestor(first_p, second));

	return (binary_trees_ancestor(first_p, second_p));
}
