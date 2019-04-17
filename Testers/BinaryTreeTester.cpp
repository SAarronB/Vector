#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff(){
    testTree.insert(7);
    testTree.insert(1);
    testTree.insert(24);
    testTree.insert(6);
    testTree.insert(66);
    testTree.insert(5);
    testTree.insert(25);
    testTree.insert(4280);
    testTree.insert(99);
    testTree.insert(9001);
    testTree.insert(101);
    
    testTree.inOrderTraversal();
    testTree.preOrderTraversal();
    testTree.postOrderTraversal();
    testTree.getHeight();
    testTree.isBalanced();
    testTree.isComplete();
}
