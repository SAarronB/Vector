//
//  Controller.hpp
//  Vector
//
//  Created by Bonilla, Sean on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/LinearNode.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Model/Nodes/Node.hpp"

using namespace std;
class Controller{
private:
    void usingNodes();
    void testLinear();
public:
    void start();
};

#endif /* Controller_hpp */
