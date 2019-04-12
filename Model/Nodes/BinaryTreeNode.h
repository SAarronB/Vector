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
    
}

#endif /* BinaryTreeNode_h */
