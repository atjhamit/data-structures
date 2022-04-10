//
//  binaryTree.hpp
//  data-structures
//
//  Created by Amit Jha on 08/04/22.
//

#pragma once

#include "../common.hpp"

typedef struct Leaf
{
    Leaf *left, *right;
    int data;
}Leaf;

class BinaryTree
{
private:
    Leaf* root;
    Leaf* create(int);
public:
    void insert();
    void inorder();
    void preorder();
    void postorder();
    void levelorder();
};
