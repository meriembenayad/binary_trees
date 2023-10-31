#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: 0 if tree is NULL or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 0 if tree is NULL or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	if (left_height == right_height)
		return (1);

	return (0);
}
