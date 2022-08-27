#include "binary_trees.h"

/**
 * binary_tree_inorder - binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left)
			binary_tree_preorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_preorder(tree->right, func);
	}
}
