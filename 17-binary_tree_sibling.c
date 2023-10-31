#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node
 *
 * Return: pointer to sibling OR NULL (if node/parent/no_child is NULL)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
