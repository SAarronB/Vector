//
//  Node.h
//  Vector
//
//  Created by Bonilla, Sean on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <assert.h>

template <class Type>
class Node{
private:
    Type data;
public:
    Node(Type data);
    Type getData();
    void setDat(Type data);
    
};

//Template definitions

template <class Type>
Node :: Node(Type data){
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
