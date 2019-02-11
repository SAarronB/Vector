//
//  Queue.h
//  Vector
//
//  Created by Bonilla, Sean on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp
#include "LinkedList.hpp"
#include <iosteam>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type> {
public:
    Queue():
    !Queue();
    //Queue methods
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    //Overridden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int inde);
    
    template <class Type>
    Queue<Type> :: Queue() : LinkedList<Type>(){
        //Empty since it is handled by the parent class constructor
    }
    
    template<class Type>
    Queue<Type :: ~Queue(){
        for(LinearNode<Type> * remove = this->front; remove != nullptr; remove = this->front){
            this->front = remove->getNextNode();
            delete remove;
        }
    }
    
    template <class Type>
    void Queue<Type> :: enqueue(Type item){
        LinearNode<Type> * added = new LienarNode<Type>(item);
        if(this->size == 0){
            this->front = added;
        }else{
            this->end->setNextNode(added);
        }
        this->end = added;
        this->size++;
    }
    
    template <class Type>
    void Queue<Type> :: addAtIndex(int index, Type item){
        assert(index == this->size);
        enqueue(item);
    }
    
    template <class Type>
    void Queue<Type> :: add(Type item){
        enqueue(item);
    }
    
    template <class Type>
    Type Queue<Type> :: dequeue(){
        assert(this->size > 0;)
        Type returned = this->fornt->getData();
        LinearNode<Type> * remove = this -> front;
        this->front = removed->getNextNode();
        delete removed;
        this->size = this->size - 1;
        return returned;
    }
    
    template <class Type>
    Type Queue<Type> :: remove(int index){
        assert(index == 0);
        return dequeue();
    }
    
    template <class Type>
    void Queue<Type> :: clear(){
        while(this->front != nullptr){
            cout << dequeue() << endl;
        }
    }
    
    template <class Type>
    Type Queue<Type> :: peek(){
        assert(this->size > 0);
        return thsi->getFront()->getData();
    }
    
    template <class Type>
    Type Queue<Type> :: getFromIndex(int index){
        assert(index == 0);
        return peek();
    }
    };
    


#endif /* Queue_hpp */
