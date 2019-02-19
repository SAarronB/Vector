//
//  Header.h
//  Vector
//
//  Created by Bonilla, Sean on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//


#include "../Nodes/Node.hpp"
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
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
    //Destructor
    virtual ~LinearNode();
};

//Templates
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>(){
    this -> next = nullptr;
}

//Accessor
template <class Type>
void LinearNode <Type> :: setNextNode(LinearNode<Type> * nextNodePointer ){
    this -> next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode(){
    return next;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data) {
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data) {
    this -> next = next;
}
#endif /* Header_h */
