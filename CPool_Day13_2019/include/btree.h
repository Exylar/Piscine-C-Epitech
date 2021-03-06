/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** structure_btree
*/

#ifndef BTREE_STRUCT
#define BTREE_STRUCT

typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;

void btree_apply_infix(btree_t *root, int (*applyf)(void *));
void btree_apply_prefix(btree_t *root, int (*applyf)(void *));
void btree_apply_suffix(btree_t *root, int (*applyf)(void *));
btree_t *btree_create_node(void *item);
void btree_insert_data(btree_t **root, void *item, int (*cmpf)());
void *btree_search_item(btree_t const *root, void const *data_ref,
        int (*cmpf)());



#endif
