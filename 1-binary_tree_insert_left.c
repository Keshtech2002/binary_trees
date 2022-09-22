#include "binary_trees.h"

/**
  * binary_tree_insert_left - insert a node as the left child
  * @parent: the node to insert left child into
  * @value: value to store inside the left child
  * Return: pointer to the new node (left child)
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_left;

	if (parent == NULL)
		return (NULL);

	old_left = parent->left;
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (old_left)
	{
		parent->left = new_node;
		old_left->parent = new_node;
		new_node->left = old_left;
	}
	else
		parent->left = new_node;

	return (new_node);
}
