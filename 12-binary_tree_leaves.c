#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: pointer to the root node
 *
 * Return: 0 if tree is NULL or leaves node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaf = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count_leaf = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (count_leaf);
}
