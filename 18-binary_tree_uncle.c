#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: pointer to the node
 *
 * Return: pointer to node OR NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
