//
//  LinkedList.h
//  Vector
//
//  Created by Bonilla, Sean on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "List.hpp"
using namespace std;

#ifndef LinkedList_hpp
#define LinkedList_hpp

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
    virtual int getSize() const;
    //Helper Methods
    virtual void add(Type item);
    virtual void addAtIndex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
    //type setAtIndex(int index, Type item);
    //bool contains(Type item);
};
template <class Type>
    LinkedList<Type> :: LinkedList(){
        this->front = nullptr;
        this->end = nullptr;
        this->size = 0;
    }
template <class Type>
    LinkedList<Type> :: ~LinkedList(){
        LinearNode<Type> * destroyStructure = front;
        while (front != nullptr) {
            front = destroyStructure -> getNextNode();
            delete destroyStructure;
            destroyStructure = front;
        }
    }
template <class Type>
    void LinkedList<Type> :: add(Type item){
        LinearNode<Type> * newData = new LinearNode<Type>(item);
        if(this -> size == 0){
            this -> front = newData;
        }else{
            this -> end -> setNextNode(newData);
        }
        this -> end = newData;
        this -> size += 1;
    }

template <class Type>
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

#endif /* LinkedList_h */
