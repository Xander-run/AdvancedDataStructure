//
// Created by Xander on 2022/3/15.
//

#ifndef PROJ1_AVLTREE_H
#define PROJ1_AVLTREE_H

class AvlTree {
    class AvlTreeNode {
    public:
        AvlTreeNode(int);
        int key;
        int leftDepth;
        int rightDepth;
        AvlTreeNode *left;
        AvlTreeNode *right;
    };

private:
    int unbalance_factor;
    AvlTreeNode *root;

public:
    AvlTree();

    AvlTree(int N);

    void Delete(int);

    void Insert(int);

    bool Query(int);

    void checkRep();

private:
    bool Query(AvlTreeNode *node, int key);

    AvlTreeNode *Delete(AvlTreeNode *node, int key);

    AvlTreeNode *Insert(AvlTreeNode *node, int key);

    int FindMinValue(AvlTreeNode *node);

    AvlTreeNode *rotateIfNecessary(AvlTreeNode *node);

    AvlTreeNode *leftRotate(AvlTreeNode *node);

    AvlTreeNode *rightRotate(AvlTreeNode *node);

    void updateHeight(AvlTreeNode *node);

    void checkRep(AvlTreeNode *node);

    int getHeight(AvlTreeNode *node);

    bool isUnbalance(AvlTreeNode *node);
};

#endif //PROJ1_AVLTREE_H
