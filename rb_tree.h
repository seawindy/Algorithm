#ifndef __RB_TREE_H__
#define __RB_TREE_H__

struct rb_node {
    unsigned int member;
    struct rb_node *leftNode;
    struct rb_node *rightNode;
};

rb_node * insert_RB(rb_node *root, unsigned int);
rb_node * delete_RB(rb_node *root, unsigned int);

#endif