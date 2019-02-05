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
#include "../Data/CrimeData.hpp"

class FileController{
  
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    
    static vector<Music> musicDataToVector(string filename);
};

#endif /* FileController_hpp */
