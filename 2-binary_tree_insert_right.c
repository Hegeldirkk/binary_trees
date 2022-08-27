#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: a pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insertNode;

	if (!parent)
		return (NULL);

	if (parent->right != NULL)
	{
		insertNode = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = insertNode;
		insertNode->parent = parent->right;
	}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
