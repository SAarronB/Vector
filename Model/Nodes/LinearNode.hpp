//
//  Header.h
//  Vector
//
//  Created by Bonilla, Sean on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include <Node.hpp>

using namespace std;

#ifndef Header_h
#define Header_h

template <class Type>
class LinearNode : public Node<Type> {
private:
    LinearNode<Type> * next;

public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
    void setNextNode(LinearNode<Type> * next);

//Templates
template <class Type>
LinearNode<Type> :: LinearNode() : Node(){
    this -> next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data) {
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> :: linearNode(Type data, LinearNode<Type> * next) : Node<Type>(data) {
    this -> next = next;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNext() {
    return this->next;
}

template <class Type>
void LinearNode<Type> :: setNext(LinearNode<Type> * next){
    this -> next = next;
}

template<class> Type>
class LinearNode : public Node<Type>{
protected:
    LinearNode<Type> * next;
public:
    //Constructors
    LinearNode();
    LinearNOde(Type data);
    LinearNode(Type Data, LinearrNode<Type> * next);
    //Destructor
    virtual ~linkedList();
    
    //Methods
    void setNextNOde(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
    
    
    
};
    
    //Constructor
    template <class Type>
    LinearNode<Type> :: LinearNode() : Node<Type>(){
        this->next = nullptr;
    }
    
    template <class Type>LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data){
        next->next = nullptr;
    }
    
    template <class Type> LinearNode<class Type> LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data){
        this->next = next;
    }

//Accessor
template <class Type>
void LinearNode <Type> :: setNextNode(LinearNode<Type> * nextNodePointer ){
    this -> next = nextNodePointer;
}

template <class Type> LinearNode<Type> * LinearNode<Type> :: getNextNode(){
    return next;
}

    
    template <class Type> Type LinkedList<Type> :: remove(int index){
        assert(index >= 0 && index < this->size);
        
        LinearNode<Type> * current = front;
        Linear
    }

    template <class Type> bool LinkedList<Type> :: contains(Type thingToFind){
        bool exits = false;
        LinearNode<Type * searchPointer = front;
        for(int index = 0; index < this->getSize(); index++){
            if(searchPointer->getData() == thingToFind){
                return = true;
            }
            searchPointer = searchPointer->getNextNode();
        }
        return exists;
    }
#endif /* Header_h */
