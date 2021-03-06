//
//  binaryTree.hpp
//  data-structures
//
//  Created by Amit Jha on 08/04/22.
//

#pragma once

#include "../common.hpp"

class BinaryTree
{
private:
    Leaf* root;
    
    Leaf* create(int);
    int height(Leaf* root);
    int count(Leaf* root);

public:
    void insert();
    void inorder();
    void preorder();
    void postorder();
    void levelorder();
    void heightAndCount();
};
