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
    vector<CrimeData> crimes;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //if the file exists at that path.
    if(dataFile.is_open()){
        //Keep Reading Until you are at the end of the file
        while(!dataFile.eof()){
            //Grab each line from the VSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            if(rowCount != 0){
                //Create a CrimeData instace forom the line. exclude a black line (usually if opened separeately
                if(currentCSVLine.length() != 0){
                    CrimeData row(currentCSVLine);
                    crimes.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }else{
        cerr << "No File" << endl;
    }
    return crimes;
}

vector<Music> FileController :: musicDataToVector(string fileName){
    vector<Music> musicList;
    string currentCSVLine;
    int rowCount = 0;
    ifstream dataFile(fileName);
    //if the file exists at that path
    if(dataFile.is_open()){
        //keepreading until you are tat the end of the file
        while(!dataFile.eof()){
            getline(dataFile, currentCSVLine, '\r');
            if(rowCount != 0){
                if(currentCSVLine.length() !=0){
                    Music row(currentCSVLine);
                    musicList.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }else{
        cerr <<"No File"<< endl;
    }
        return musicList;
}
