#include "binary_trees.h"

int maximum(int left_h, int right_h);

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to be measured
 * Return: tree height of 0 is tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	return (maximum(left_height, right_height));
}

/**
 * maximum - finds the maxium height between left and right nodes
 * @left_h: left nodes height
 * @right_h: right nodes height
 * Return: maximum height
 */
int maximum(int left_h, int right_h)
{
	if (left_h > right_h)
		return (left_h);
	return (right_h);
}
