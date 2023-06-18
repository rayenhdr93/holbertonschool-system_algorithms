#include "rb_trees.h"
/**
 * rb_tree_node - function that creates a Red-Black Tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * @color: the color of the node
 * Return: a pointer to the new node, or NULL on failure
*/
rb_tree_t *rb_tree_node(rb_tree_t *parent, int value, rb_color_t color)
{
	rb_tree_t *New = malloc(sizeof(rb_tree_t));

	if (!New)
		return (NULL);
	New->n = value;
	New->parent = parent;
	New->left = NULL;
	New->right = NULL;
	New->color = color;
	return (New);
}
