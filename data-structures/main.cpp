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
    BinaryTree obj;
    
    obj.insert();
    obj.preorder();
    obj.postorder();
    obj.inorder();
    obj.levelorder();
    
    obj.heightAndCount();
    
    
    return 0;
}
 
