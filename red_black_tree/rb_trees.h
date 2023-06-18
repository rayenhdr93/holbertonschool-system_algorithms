#ifndef _RB_TREES_H_
#define _RB_TREES_H_
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
/**
 * enum rb_color_e - Possible color of a Red-Black tree
 *
 * @RED: 0 -> Red node
 * @BLACK: 1 -> Black node
 * @DOUBLE_BLACK: 2 -> Double-black node (used for deletion)
 */
typedef enum rb_color_e
{
	RED = 0,
	BLACK,
	DOUBLE_BLACK
} rb_color_t;

/**
 * struct rb_tree_s - Red-Black tree node structure
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 * @color: Color of the node (RED or BLACK)
 */
typedef struct rb_tree_s
{
	int n;
	rb_color_t color;
	struct rb_tree_s *parent;
	struct rb_tree_s *left;
	struct rb_tree_s *right;
} rb_tree_t;
rb_tree_t *rb_tree_node(rb_tree_t *parent, int value, rb_color_t color);
int rb_tree_is_valid(const rb_tree_t *tree);
rb_tree_t *rb_tree_insert(rb_tree_t **tree, int value);
void rb_insert_fixup(rb_tree_t **tree, rb_tree_t *new);
rb_tree_t *rb_insert_fixup_LEFT(rb_tree_t **tree, rb_tree_t *new);
rb_tree_t *rb_insert_fixup_RIGHT(rb_tree_t **tree, rb_tree_t *new);
void rb_rotate_left(rb_tree_t **tree, rb_tree_t *new);
void rb_rotate_right(rb_tree_t **tree, rb_tree_t *new);
rb_tree_t *array_to_rb_tree(int *array, size_t size);
rb_tree_t *rb_tree_remove(rb_tree_t *root, int n);
rb_tree_t *rb_tree_delete(rb_tree_t *root, rb_tree_t *remove);
void rb_transplant(rb_tree_t **root, rb_tree_t *x, rb_tree_t *y);
rb_tree_t *rb_delete_fixup(rb_tree_t *root, rb_tree_t *x);
rb_tree_t *rb_delete_fix_left(rb_tree_t **root, rb_tree_t *x);
rb_tree_t *rb_delete_fix_right(rb_tree_t **root, rb_tree_t *x);
rb_tree_t *tree_min(rb_tree_t *root);
rb_tree_t *rb_tree_remove(rb_tree_t *root, int n);
rb_tree_t *rb_tree_delete(rb_tree_t *root, rb_tree_t *remove);
void rb_transplant(rb_tree_t **root, rb_tree_t *x, rb_tree_t *y);
rb_tree_t *rb_delete_fixup(rb_tree_t *root, rb_tree_t *x);
rb_tree_t *rb_delete_fix_left(rb_tree_t **root, rb_tree_t *x);
rb_tree_t *rb_delete_fix_right(rb_tree_t **root, rb_tree_t *x);
rb_tree_t *tree_min(rb_tree_t *root);
#endif /* _RB_TREES_H_ */
