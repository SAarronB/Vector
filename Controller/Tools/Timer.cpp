//
//  Timer.cpp
//  Vector
//
//  Created by Bonilla, Sean on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Timer.hpp"

using namespace std;

Timer :: Timer(){
    executionTime = 0;
}

void Timer :: resetTimer(){
    executionTime = 0;
}

void Timer :: startTimer(){
    executionTime = clock();
}

void Timer :: stopTimer(){
    assert(executionTime != 0);
    executionTime = clock() - executionTime;
}

void Timer :: displayInformation(){
    cout << "The Execution Time: " << endl;
    cout << "In Human Time: " << double (executionTime)/CLOCKS_PER_SEC << " Seconds" << endl;
}

long Timer :: getTimeInMicroSeconds(){
    return executionTime;
}


