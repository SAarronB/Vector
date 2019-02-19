//
//  LinearTester.cpp
//  Vector
//
//  Created by Bonilla, Sean on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL(){
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/sbon9081/C++Projects/Vector/Data/crime.csv");
    crimeTimeSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readCrimeDataToList("/Users/sbon9081/C++Projects/Vector/Data/crime.csv");
    crimeTimeOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOp.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimerInMicroseconds() << " micorseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tunes = FileController :: musicDataToVector("");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("");
    musicOOP>stopTimer();
    
    musicSTL.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimerInMicroseconds() - musicSTL.getTimerInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}
