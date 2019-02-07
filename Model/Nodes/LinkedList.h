//
//  LinkedList.h
//  Vector
//
//  Created by Bonilla, Sean on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "List.hpp"
using namespace std;

#ifndef LinkedList_h
#define LinkedList_h

template <class Type>
class LinkedList:public List<Type> {
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList(); //Virtual so it can be overridden
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    //type setAtIndex(int index, Type item);
    //bool contains(Type item);
    LinkedList<Type> :: LinkedList(){
        this->front = nullptr;
        this->end = nullptr;
        this->size = 0;
    }
    LinkedList<Type> :: ~LinkedList(){
        LinearNode<Type> * destroyStructure = front;
        while (front != nullptr) {
            front = deestroyStructure -> getNextNode();
            delete destroyStructure;
            destroyStructure = front;
        }
    }
    void LinkedList<Type> :: add(Type item){
        LinearNode<Type> :: add(Type item);
        if(this -> size == 0){
            this -> front = newData;
        }else{
            this -> end -> setNextNode(newData);
        }
        this -> end = newData;
        this -> size += 1;
    }
    
    void LinkedList<Type> :: addAtIndex(int index, Type item){
        assert(index >= 0 && index <= this -> size);
        if(index == this -> size){
            add(item);
        }else{
            LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
            if(index == 0){
                toBeAdded -> setNextNode(front);
                front = toBeAdded;
            }else{
                LinearNode<Type> * previous = nullptr;
                LinearNode<Type> * current = front;
                for(int position = 0; position < index; position++){
                    previous = current;
                    current = current ->getNextNode();
                }
                previous->setNextNode(toBeAdded);
                toBeAdded -> setNextNode(current);
            }
            this->size;
        }
    }
    //ended off page 5 of Linked List Class docs
};

#endif /* LinkedList_h */
