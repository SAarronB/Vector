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
    
    BinaryTreeNode<Type> * getLeftChild();
    void setLeftChild(BinaryTreeNode<Type> * leftChild);
    
    BinaryTreeNode<Type> * getRightChild();
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
}


template<class Type>
void BinaryTreeNode<Type> :: setRoot(BinaryTreeNode<Type> * newRoot){
    Root = newRoot;
}

template<class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * leftChild){
    this->leftChild = leftChild;
}

template<class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * rightChild){
    this->rightChild = rightChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode(){
    return this->Root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild(){
    return this->rightChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild(){
    return this->leftChild;
}



#endif /* BinaryTreeNode_h */
