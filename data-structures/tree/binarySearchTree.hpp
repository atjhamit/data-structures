//
//  binarySearchTree.hpp
//  data-structures
//
//  Created by Amit Jha on 10/04/22.
//

#pragma once

#include "../common.hpp"

class BinarySearchTree
{
private:
    Leaf* root;
    Leaf* create(int);
public:
    void insert(int&);
    void insert(std::vector<int>&);
    void inorder();
    void preorder();
    void postorder();
    void levelorder();
    Leaf* search(int& element);
};
