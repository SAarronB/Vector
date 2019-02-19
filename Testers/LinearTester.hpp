//
//  LinearTester.hpp
//  Vector
//
//  Created by Bonilla, Sean on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearTester_hpp
#define LinearTester_hpp
#include <iostream>
#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Model/Linear/Stack.hpp"
#include "../Model/Linear/Queue.hpp"
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"


using namespace std;

class LinearTester{
public:
    void testVsSTL();
};

#endif /* LinearTester_hpp */
