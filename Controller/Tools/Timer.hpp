//
//  Timer.hpp
//  Vector
//
//  Created by Bonilla, Sean on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp
#include <time.h>
#include<assert.h>
#include <iostream>

class Timer{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroSeconds();
};


#endif /* Timer_hpp */
