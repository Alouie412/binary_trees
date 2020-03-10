#include "binary_trees.h"

/**
 * height_helper_left - Helper function. Recursively traverses
 * the left subtree and keeps count of recursions done
 * @tree: The current node
 * Return: The number of recursions done
 */
size_t height_helper_left(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (1 + height_helper_left(tree->left));
	else
		return (0);
}

/**
 * height_helper_right - Helper function. Recursively traverses
 * the right subtree and keeps count of recursions done
 * @tree: The current node
 * Return: The number of recursions done
 */
size_t height_helper_right(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (1 + height_helper_right(tree->right));
	else
		return (0);
}
/**
 * binary_tree_height - The driver function. Measures the height of
 * the binary tree at a particular node
 * @tree: The node to be measured
 * Return: 0 if tree is NULL, otherwise the distance between node
 * and "ground level"
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = height_helper_left(tree);
	right_height = height_helper_right(tree);

	/* Subtract 1. The leaf node is considered "ground level" */
	if (left_height > right_height)
		return (left_height - 1);
	else
		return (right_height - 1);
}
