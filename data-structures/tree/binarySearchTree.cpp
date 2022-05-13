//
//  binarySearchTree.cpp
//  data-structures
//
//  Created by Amit Jha on 10/04/22.
//

#include "binarySearchTree.hpp"\

Leaf* BinarySearchTree::create(int data)
{
    Leaf* temp = new Leaf;
    temp->left = temp->right = 0;
    temp->data = data;
    return temp;
}

Leaf* BinarySearchTree::search(int& element)
{
    Leaf* temp = root;
    while(temp && temp->data != element)
    {
        if(temp->data < element)
            temp = temp->right;
        else
            temp = temp->left;
    }
    
    if(temp && temp->data == element)
        return temp;
    else
        return 0;
}

void BinarySearchTree::insert(int& element)
{
    Leaf* newnode = create(element);
    if(!root)
    {
        root = newnode;
        return;
    }
    Leaf* tail = 0;
    Leaf* temp = root;
    
    while(temp)
    {
        tail = temp;
        if(temp->data > element)
            temp = temp->left;
        else if(temp->data < element)
            temp = temp->right;
        else
            return;
    }
    
    if(tail->data < element)
        tail->right = newnode;
    else
        tail->left = newnode;
}

void BinarySearchTree::insert(std::vector<int>& elements)
{
    for(int i = 0; i < elements.size(); i++)
    {
        insert(elements[i]);
    }
}

void BinarySearchTree::preorder()
{
    LOG("==Preorder==");
    std::stack<Leaf*> st;
    Leaf* temp = root;

    while(temp || !st.empty())
    {
        if(temp)
        {
            LOG_T(temp->data);
            st.push(temp);
            temp = temp->left;
        }
        else
        {
            temp = st.top(); st.pop();
            temp = temp->right;
        }
    }
    LOG("");
}

void BinarySearchTree::inorder()
{
    LOG("==Inorder==");
    std::stack<Leaf*> st;
    Leaf* temp = root;
    while(temp || !st.empty())
    {
        if(temp)
        {
            st.push(temp);
            temp = temp->left;
        }
        else
        {
            temp = st.top(); st.pop();
            LOG_T(temp->data);
            temp = temp->right;
        }
    }
    LOG("");
}

void BinarySearchTree::postorder()
{
    LOG("==Postorder==");
    std::stack<Leaf*> st;
    Leaf* temp = root;
    long int addr;
    while(temp || !st.empty())
    {
        if(temp)
        {
            st.push(temp);
            temp = temp->left;
        }
        else
        {
            temp = st.top(); st.pop();
            addr = (long int) temp;
            if(addr > 0)
            {
                addr *= -1;
                st.push((Leaf*)addr);
                temp = temp->right;
            }
            else
            {
                addr *= -1;
                temp = (Leaf*) addr;
                LOG_T(temp->data);
                temp = 0;
            }
        }
    }
    LOG("");
}

void BinarySearchTree::levelorder()
{
    LOG("==Levelorder==");
    std::queue<Leaf*> q;

    q.push(root);
    Leaf* temp;

    while(!q.empty())
    {
        temp = q.front(); q.pop();
        LOG_T(temp->data);
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
    LOG("");
}



//#define N 16
//static int pseudoMain()
//{
//    std::vector<int> elements;
//    for(int i = 1; i < N; i++)
//    {
//        elements.push_back(i);
//    }
//
//    BinarySearchTree bst;
//    bst.insert(elements);
//    bst.inorder();
//    int ele1 = 5;
//    int ele2 = 99;
//    if(bst.search(ele1))
//        LOG("found -> " << ele1);
//    else
//        LOG("missing -> " << ele1);
//    if(bst.search(ele2))
//        LOG("found -> " << ele2);
//    else
//        LOG("missing -> " << ele2);
//
//    return 0;
//}
