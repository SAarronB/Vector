//
//  Controller.cpp
//  Vector
//
//  Created by Bonilla, Sean on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
#include "../Data/CrimeData.hpp"
using namespace std;

void Controller :: start(){
    
//-------------Making a Int Vector--------------------
    size_t numSize = 6;
    
    /*declares a vector
     of integers and makes room for 10 integers*/
    vector<int> firstVector = {1,2,3,4,5};
//------------Making a Int Vector---------------------
    
    //-------------Making a Sting Vector--------------------
    vector<string> secondVector = {"Hi","Hello","Hey"};
//------------Making a String Vector---------------------
    

//-----------------Making Array----------------
    //Initializing String Array
    string copyStrings[4];
    
    // assign some values:
    for (int i = 0; i < secondVector.size(); i++){
        copyStrings[i] = secondVector.at(i)=i;
    }
//-----------------Making Array----------------
    
//--------------Printing Vectors-----------
    for(int num : firstVector){
        cout << num << endl;
    }
    
    for(int i = 0; i < secondVector.size(); i++){
        cout << &secondVector << endl;
    }
    cout<<"Greetings Hooman, your number is: "<<endl;
    usingNodes();
    
//---------------Outputs IndexRows-----------
    
    
    
    cout << index << ": contents are: " << nameOfVector[index] << endl;
    
};

void Controller :: usingNodes(){
    Node<int>mine(5);
    Node<string> wordHolder("These are words that are saved");
    cout<<mine.getData()<<endl;
    cout<<wordHolder.getData()<<endl;
    wordHolder.setDat("The words have been replaced with these");
    cout<<wordHolder.getData()<<endl;
}
