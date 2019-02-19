//
//  Node.h
//  Vector
//
//  Created by Bonilla, Sean on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include "../Nodes/Node.hpp"
#include <assert.h>

template <class Type>
class Node{
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

//Template definitions

template <class Type>

//default constructor<
Node<Type> :: Node(){
    this -> data = data;
}
template <class Type>
Node<Type> :: Node(Type data){
    this -> data = data;
}
template <class Type>
Type Node<Type> :: getData() {
    return data;
}

template <class Type>
void Node<Type> :: setData(Type data) {
    this -> data = data;
}

#endif /* Node_h */
