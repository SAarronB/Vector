//
//  BinarySearchTree.h
//  Vector
//
//  Created by Bonilla, Sean on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include "Tree.hpp"
#include <iostream>
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type> {
protected:
    //MARK: PROTECTED METHODS
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    void destroyTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
public:
    //MARK: PUBLIC METHODS
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraverasl();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximu();
};

//---------------------HEIGHT METHODS----------------------+
template <class Type>
int BinarySearchTree<Type> :: getHeight() {
    return calculateHeight(this->root);
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinaryTreeNode<Type> * current) {
    if(current != nullptr){
        return max(calculateSize(current->getLeftChild()) + calculateSize(current->getRightChild()))+1;
    }
    return 0;
}
//---------------------HEIGHT METHODS----------------------+


//---------------------SIZE METHODS----------------------+
template <class Type>
int BinarySearchTree<Type> :: getSize() {
    int size = 0;
    size += calculateSize(this->root);
    return size;
}

template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinaryTreeNode<Type> * current) {
    if(current != nullptr){
        return calculatesSize(current->getLeftChild()) + calculateSize(current->getRightChild())+1;
    }
    return 0;
}
//---------------------SIZE METHODS----------------------+


//---------------------COMPLETE METHODS----------------------+
template <class Type>
bool BinarySearchTree<Type> :: isComplete() {
    int index = 0;
    int size = getSize();
    return isComplete(this->root, index, size);
}

template <class Type>
bool BinarySearchTree<Type>::isComplete(BinaryTreeNode<Type> * startNode, int index, int size) {
    if(startNode == nullptr){
        return true;
    }
    
    if(index >= size){
        return false;
    }
    return (isComplete(startNode->getLeftChild(), 2 * index + 1, size) && isComplete(startNode->getRightChild(), 2 * index + 2, size));
}
//---------------------COMPLETE METHODS----------------------+

//---------------------BALANCED METHODS----------------------+
template <class Type>
bool BinarySearchTree<Type> :: isBalanced() {
    return isBalanced(this->root);
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * current) {
    int leftHeight = 0;
    int rightHeight = 0;
    
    if(current == nullptr){
        return true;
    }
    
    leftHeight = calculateHeight(current->getLeftChild());
    rightHeight = calculateHeight(current->getRightChild());
    
    int heightDifference = abs(leftHeight - rightHeight);
    bool leftBalanced = isBalanced(current ->getLeftChild());
    bool rightBalanced = isBalanced(current->getRightChild());
    
    if(heightDifference <= 1 && leftBalanced && rightBalanced){
        return true;
    }
    return false;
}
//---------------------BALANCED METHODS----------------------+

//---------------------BALANCED METHODS----------------------+
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal() {
     inOrderTravversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type>*currentNode) {
    if(currentNode != nullptr){
        inOrderTraversal(currentNode->getLeftChild());
        cout<< currentNode->getData() << endl;
        inOrderTraversal(currentNode->geRightChild());
    }
}
//---------------------BALANCED METHODS----------------------+

//---------------------PREORDERTRAVERSAL METHODS----------------------+

template <class Type >
void BinarySearchTree<Type> :: preOrderTraversal() {
    preOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * currentNode) {
    if(current != nullptr){
        cout << currentNode->getData() << endl;
        preOrderTraversal(currentNode->getLeftChild());
        preOrderTraversal(currentNode->getRightChild());
    }
}
//---------------------PREORDERTRAVERSAL METHODS----------------------+

template <class Type >
void BinarySearchTree<Type> :: postOrderTraversal() {
    postOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * currentNode) {
    if(currentNode != nullptr){
        preOrderTraversal(currentNode->getLeftChild());
        preOrderTraversal(currentNode->getRightChild());
        cout << currentNode->getData() << endl;
    }
}
//---------------------INSERT METHODS----------------------+

template <class Type>
void BinarySearchTree<Type> :: insert(Type item) {
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(item);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr){
        this->root = insertMe;
    }else{
        while(current != nullptr){
            previous = current;
            if(item < current->getData()){
                current = current->getLeftChild();
            }else if(item > current->getData()){
                current = current->getRightChild();
            }else{
                cerr<<"Item exists already - Exiting insert" << endl;
                delete insertMe;
                return;
            }
        }
        if(previous->gerData() > item){
            previous->setLeftChild(insertMe);
        }else{
            previous->setRightChild(insertMe);
        }
        insertMe->setRootNode(previous);
    }
}
//---------------------INSERT METHODS----------------------+


template <class Type >
bool BinarySearchTree<Type> :: contains(Type value) {
    return false
}

template <class Type >
void BinarySearchTree<Type> :: remove(Type item) {

}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert) {
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr){
        this->root = insertMe;
    }else{
        while(current != nullptr){
            
        }
    }
}

#endif /* BinarySearchTree_h */
