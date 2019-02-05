//
//  FileController.cpp
//  Vector
//
//  Created by Bonilla, Sean on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"
using namespace std;

vector<CrimeData> FileController :: readCrimeDataToVector(string filename){
    vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
//if the file exists at that path.
    if(dataFile.is_open()){
        //keep reading until you are at the end of the file.
        while (!dataFile.eof()){
            //grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, "\n")
            //Exclude header row
            if(rowCount != 0){
                CrimeData row(currentCSVLine);
                crimeVector.push_back(row);
            }
        }
        rowCount++;
    }
    dataFile.close();
}
else{
    cout << "NO FILE" << endl;
}
    return crimeVector;
}
