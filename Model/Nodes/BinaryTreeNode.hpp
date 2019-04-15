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
    BinaryTreeNode<Type> * getRootNode();
    void setRoot(BinaryTreeNode<Type> * root);
    BinaryTreeNode<Type> * getLeftChild;
    void setLeftChild(BinaryTreeNode<Type> *leftChild);
    BinaryTreeNode<Type> * getRightChild;
    void setRightChild(BinaryTreeNode<Type> * rightChild);
};
//CONSTRUCTOR
template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>(){
    Root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data) {
    Root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
};

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * left){
    this->leftChild;
};




template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * right){
    this->rightChild;
};

template<class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot){
    Root = newRoot;
};

template<class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * leftChild){
    this->left = leftChild;
};

template<class Type>
BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * rightChild){
    this->right = rightChild;
};
#endif /* BinaryTreeNode_h */
