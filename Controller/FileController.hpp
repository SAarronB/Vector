//
//  FileController.hpp
//  Vector
//
//  Created by Bonilla, Sean on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
//#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"
#include "../Data/CrimeData.hpp"
#include "../Data/Music.hpp"


using namespace std;

class FileController{
  
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    static vector<Music> musicDataToVector(string filename);
    
    //static array<Music> musicDataToArray(string filename);
    static LinkedList<Music> musicDataToList(string filename);
};

#endif /* FileController_hpp */
