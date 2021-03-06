
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
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotaion(BInaryTreeNode<Type> * parent);
    
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
int AVL<Type> :: heightDifference(BinaryTreeNode<Type> * node) {
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftChild());
    int rightHeight = this->calculateHeight(node->getRightChild());
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>() {
    this->root = nullptr;
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
        if(this->getRoot() == nullptr){
            this->setRoot(parent);
        }
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
BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation(BinaryTreeNode<Type> * parent) {
    BinaryTreeNode<Type> * changeNode;
    changeNode = parent->getLeftChild();
    
    parent->setLeftChild(changedNode->getRightChild());
    
    changeNode->setRightChild(parent);
    parent->setRootNode(changeNode);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation(BinaryTreeNode<Type> * parent) {
    BinaryTreeNode<Type> * changeNode;
    changeNode = parent->getRightChild();
    
    parent->setRightChild(changedNode->getLeftChild());

    changeNode->setLeftChild(parent);
    parent->setRootNode(changeNode);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightLeftRotation(BinaryTreeNode<Type> * parent) {
    BinaryTreeNode<Type> * changeNode;
    changeNode = parent->getRightChild();
    
    parent->setRightChild(leftRotation(changedNode));
    
    return rightRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRightRotation(BinaryTreeNode<Type> * parent) {
    BinaryTreeNode<Type> * changeNode;
    changeNode = parent->getLeftChild();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return rightRotation(parent);
}


template <class Type>
void AVLTree :: insert(Type item) {
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLTree :: remove(Type item) {
    removeNode(this->getRoot(), item);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree(BinaryTreeNode<Type> * parent) {
    int balanceFactor = heightDifference(parent);
    if(balaceFactor > 1){
        if(){
            parent = leftRotation(parent);
        }else{
            parent = lefRightRotaion(parent);
        }
    }else if(balanceFactor < -1){
        if()heightDifference(parent->getRightChild()) > 0){
            parent = rightLeftRotaion(parent);
        }else{
            parent=rightRotation(parent);
        }
    }
    return parent;
}

#endif /* Header_h */
