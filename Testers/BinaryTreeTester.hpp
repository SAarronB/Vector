//
//  BinaryTreeTester.hpp
//  Vector
//
//  Created by Bonilla, Sean on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <iostream>
#include "../Model/NonLinear/BinarySearchTree.hpp"
#include "../Model/Nodes/BinaryTreeNode.hpp"

class BinaryTreeTester{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};
#endif /* BinaryTreeTester_hpp */
