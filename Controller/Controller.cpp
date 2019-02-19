//
//  Controller.cpp
//  Vector
//
//  Created by Bonilla, Sean on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start(){
    cout << "Welcoem to the data Structures App" << endl;
    testLinear();
}

void Controller :: usingNodes(){
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("words can be stored");
    cout<< mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
}

void Controller :: testLiner(){
    LinearTester lookieHere;
    lookiHere.testVsSTL();
}
