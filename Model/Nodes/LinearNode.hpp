//
//  Header.h
//  Vector
//
//  Created by Bonilla, Sean on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <Node.hpp>

template <class Type>
class LinearNode : public Node<Type> {
private:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * getNext();
    void setNext(LinearNode<Type> * next);
};

//Templates
template <class Type>
LinearNode<Type> :: LinearNode() : Node(){}

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
    
    //Methods
    void setNextNOde(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};

//Accessor
template <class Type>
void LinearNode <Type> :: setNextNode(LinearNode<Type> * nextNodePointer ){
    this -> next = nextNodePointer;
}

template <class Type> LinearNode<Type> * LinearNode<Type> :: getNextNode(){
    return next;
}

#endif /* Header_h */
