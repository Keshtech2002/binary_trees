#include "binary_trees.h"

/**
  * binary_tree_insert_right - insert a node as the right child
  * @parent: the node to insert right child into
  * @value: value to store inside the right child
  * Return: pointer to the new node (right child)
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_right;

	if (parent == NULL)
		return (NULL);

	old_right = parent->right;
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (old_right)
	{
		parent->right = new_node;
		old_right->parent = new_node;
		new_node->right = old_right;
	}
	else
		parent->right = new_node;

	return (new_node);
}
