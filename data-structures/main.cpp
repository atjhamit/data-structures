//
//  main.cpp
//  data-structures
//
//  Created by Amit Jha on 08/04/22.
//

#include "tree/binaryTree.hpp"
#include "tree/binarySearchTree.hpp"

#define N 16
int main()
{
//    BinaryTree obj;
//    std::vector<int> elements;
//    obj.insert();
//    obj.preorder();
//    obj.inorder();
//    obj.postorder();
//    obj.levelorder();
    
    std::vector<int> elements;
    for(int i = 1; i < N; i++)
    {
        elements.push_back(i);
    }
    
    BinarySearchTree bst;
    bst.insert(elements);
    bst.inorder();
    int ele1 = 5;
    int ele2 = 99;
    if(bst.search(ele1))
        LOG("found -> " << ele1);
    else
        LOG("missing -> " << ele1);
    if(bst.search(ele2))
        LOG("found -> " << ele2);
    else
        LOG("missing -> " << ele2);
}
