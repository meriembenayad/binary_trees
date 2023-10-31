#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: pointer to the node
 *
 * Return:  1 (node is root) Or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	if (node->left && node->right)
		return (1);

	return (0);
}
