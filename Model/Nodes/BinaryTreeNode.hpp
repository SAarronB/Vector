//
//  BinaryTreeNode.h
//  Vector
//
//  Created by Bonilla, Sean on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

#include "Node.hpp"
#include <assert.h>

template <class Type>
class BinaryTreeNode : public Node<Type> {
private:
    //MEMBERS OF DATA
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
    BinaryTreeNode<Type> * Root;
public:
    //CONSTRUCTORS
    BinaryTreeNode();
    BinaryTreeNode(Type Data);
    //GETTERS AND SETTERS
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    BinaryTreeNode<Type> * getLeftChild;
    void setLeftChild(BinaryTreeNode<Type> *leftChild);
    BinaryTreeNode<Type> * getRightChild;
    void setRightChild(BinaryTreeNode<Type> * rightChild);
    BinaryTreeNode<Type> * getRoot;
};
//CONSTRUCTOR
template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>(){
    root = nullprt;
    left = nullprt;
    right = nullprt;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data) {
    root = nullprt;
    left = nullprt;
    right = nullprt;
};

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode(){
    return this->root;
};

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode(){
    return this->left;
};

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode(){
    return this->right;
};

template<class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot){
    root = newRoot;
};

template<class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * left){
    this->left = left;
};

template<class Type>
BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * right){
    this->right = right;
};
#endif /* BinaryTreeNode_h */
