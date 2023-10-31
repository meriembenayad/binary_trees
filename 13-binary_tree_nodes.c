#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root
 *
 * Return: 0 if pointer not node OR count_parent
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_parent = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left || tree->right)
		count_parent = binary_tree_nodes(tree->left)
			+ 1 + binary_tree_nodes(tree->right);

	return (count_parent);
}
