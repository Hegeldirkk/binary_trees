#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insertNode;

	if (!parent)
		return (NULL);

	if (parent->left != NULL)
	{
		insertNode = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = insertNode;
		insertNode->parent = parent->left;
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
