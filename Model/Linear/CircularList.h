//
//  CircularList.h
//  Vector
//
//  Created by Bonilla, Sean on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h
#include "../Nodes/DoubleNode.hpp"

template <class Type>
class CircularList{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    int size;

public:
    CircularList();
    ~CircularList();
    
    //List methods
    void add(Type item);
    void addAtindex(int index, Type item);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
};

template <class Type>
CircularList<Type> :: CircularList() {
    front = nullptr;
    end = nullptr;
    this->size = 0;
};

template <class Type>
CircularList<Type> :: ~CircularList() {
    DoubleNode<Type> * current = front;
    while(this->front != nullptr){
        front = front->getNext();
        delete current;
        current = front;
    }
};

template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index) {

    assert (index >= 0 && index < this -> size);
    DoubleNode<Type> * nodeToFind;
    
    if(index < this -> /2){
        nodeFind = this->front;
        for(int position = 0; position < index; position++){
            nodeToFind = nodeToFind->getNext();
        }
    }else{
        nodeToFind = this->end;
        for(int position = this->size -1; position > index; position--){
            nodeToFind = nodeToFind->getPrevious();
        }
    }
    return nodeToFind;
};


template <class Type>
CircularList<Type> * CircularList<Type> :: find(int index){
    DoubleNode<Type> * foundNode = nullptr;
    return foundNode;
};

template <class Type>
void CircularList<Type> :: add(Type item){
    DoubleNode<Type> * addNode;
    if(this->size == 0){
        addedNode = new DoubleNode<Type>(item);
        this->front = addedNode;
    }else{
        addedNode = new DoubleNode<Type>(item, this->end, this->front);
    }
    this-> end = addedNode;
    this-> size++;
};

template <class Type>
void CircularList<Type> :: addAtIndex(int index, Type item){
    assert (index >= 0 && index <= this ->size);
    DoubleNode<Type> * next;
    DoubleNode<Type> * previous;
    DoubleNode<Type> * addMe;
    
    if(index < this->size){
        next = findNode(index);
        previous = next-> getPrevious();
    }else if (index == this->size){
        next = this->front;
        previous = this->end;
    }
    addMe = new DoubleNode<Type>(item, previous, next);
    if (index == 0){
        this->front = addMe;
    }else if(index == this->size){
        this->end = addMe;
    }
    previous->setNext(addme);
    next->setPrevious(addMe);
    this->size++;
};

template <class Type>
void CircularList<Type> :: setAtIndex(int index, Type item){
    assert(index >= 0 && index < size);
    DoubleNode<Type> * replacedValue = findeNode(index);
    Type replaced = replacedValue ->getData();
    replacedValue ->setData(item);
    return replaced;
};

template <class Type>
void CircularList<Type> :: remove(int index){
    assert(Index >= 0 && index < this->size);
    DoubleNode<Type> * removed = findNode(index);
    DoubleNode<Type> * removedPrevious = removed->getPrevious();
    DoubleNode<Type> * removedNext = removed->getNext();
    
    if(index==0){
        this->front = removedNext;
        this->end->setNext(removedNext);
    }
    if(index == this->size-1){
        this->end = removedPrevious;
        this->end->setNext(removedPrevious);
    }
    removedPrevious->setNext(removedNext);
    removedNext->setPrevious(removedPrevious);
    
    Type value = removed -> getData();
    this->size--;
    delete removed;
    return value;
};

template <class Type>
void CircularList<Type> :: getFromIndex(int index){
    assert(index >= 0 && index < this->size);
    DoubleNode<Type> * holder = findNode(index);
    return holder->getData();
};
template <class Type>
int CircularList<Type> :: getSize() const {
    return this-> size;
};
#endif /* CircularList_h */
