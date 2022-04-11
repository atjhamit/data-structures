//
//  binaryTree.cpp
//  data-structures
//
//  Created by Amit Jha on 08/04/22.
//
#include "binaryTree.hpp"

Leaf* BinaryTree::create(int data)
{
    Leaf* temp = new Leaf;
    temp->left = temp->right = 0;
    temp->data = data;
    return temp;
}

void BinaryTree::insert()
{
    int ele;
    LOG("===Enter -99 for null element===");
    LOG_T("Enter the root element:");
    std::cin >> ele;
    root = create(ele);
    std::queue<Leaf*> q;
    q.push(root);
    Leaf* temp;
    
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        
        LOG_T("Enter left child of : " << temp->data);
        std::cin >> ele;
        if(ele != -99)
        {
            temp->left = create(ele);
            q.push(temp->left);
        }
        
        LOG_T("Enter right child of : " << temp->data);
        std::cin >> ele;
        if(ele != -99)
        {
            temp->right = create(ele);
            q.push(temp->right);
        }
    }
}

void BinaryTree::preorder()
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

void BinaryTree::inorder()
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

void BinaryTree::postorder()
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

void BinaryTree::levelorder()
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

#define N 16
static int pseudoMain()
{
    BinaryTree obj;
    std::vector<int> elements;

    for(int i = 1; i < N; i++)
    {
        elements.push_back(i);
    }

    obj.insert();
    obj.preorder();
    obj.inorder();
    obj.postorder();
    obj.levelorder();
    return 0;
}
