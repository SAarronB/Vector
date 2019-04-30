
\


//
//  Header.h
//  Vector
//
//  Created by Bonilla, Sean on 4/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

template <class Type>
class AVLTree : public BinarySearchTree<Type> {
private:
    BinaryTreeNode<Type> * leftRotaion(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotaion(BInaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent , Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * parent);
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
    
};

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted) {
    if(parent == nullptr){
        return parent;
    }else if (inserted < parent->getNodeData()) {
        parent->setLeftChild(removeNode(parent->getLeftChild(), inserted));
    }else if(inserted > parent-> getNodeData()){
        parent->setRightChild(removeNode(parent->getRightChild(), inserted));
    }else{
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftChild() == nullptr && parent->getRightChild() == nullptr){
            temp = parent;
            return temp;
        }else if (parent->getLeftChild() == nulptr) {
            *parent = *parent->getRightChild();
        }else if(parent->getRightChild() == nullptr){
            *parent = *parent->getLeftChild();
        }else{
            BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->getRightChild());
            parent->setRightChild(removeNode(parent->setRightChild() leftMost->setNodeData()));
            parent->setRighChild(removeNodeData(parent->getRightChild(), inserted));
        }
    }
    
    if(parent == nullptr){
        return parent;
    }
    return balanceSubTree(parent);
}

/*
 Checks the parent for value of nullptr, compares inserted to the parent for grater or less than.
 if nullptr is true then sets position to root
 if inserted is less than parent, sets data as left child.
 if inserted is more than parentk, sets data to right child.
 */
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted) {
    if(parent == nullptr){
        parent = new BinaryTreeNode<Type>(inserted);
        this->setRoot(parent);
        return parent;
    }else if (inserted < parent->getNodeData()) {
        parent->setLeftChild(insertNode(parent->getLeftChild(), inserted));
        parent = balancedSubTree(parent);
    }else if(inserted > parent-> getNodeData()){
        parent->setRightChild(insertNode(parent->getRightChild(), inserted));
        parent = balanceSubTree(parent);
    }
    return parent;
}

template <class Type>
void AVLTree :: insert(Type item) {
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLTree :: remove(Type item) {
    removeNode(this->getRoot(), item);
}

#endif /* Header_h */
