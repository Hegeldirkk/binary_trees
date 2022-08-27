#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of a binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t countNode = 0;
	const binary_tree_t *inserNode;

	if (!tree)
		return (0);

	inserNode = tree;
	while (inserNode->parent != 0)
	{
		inserNode = inserNode->parent;
		countNode++;
	}
	return (countNode);
}
