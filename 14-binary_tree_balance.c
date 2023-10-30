#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to the root node
 *
 * Return: 0 if tree is NULL OR balance_factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_left = binary_tree_balance(tree->left) + 1;

	if (tree->right)
		height_right = binary_tree_balance(tree->right) + 1;

	return (height_left - height_right);
}
