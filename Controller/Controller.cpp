//
//  Controller.cpp
//  Vector
//
//  Created by Bonilla, Sean on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
using namespace std;

void Controller :: start(){
//-------------Making a Vector--------------------
    size_t size = 10;
    vector<int> firstVector(size); /*declares a vector
    of integers and makes room for 10 integers*/
//------------Making a Vector---------------------
    
//-----------------Making Array----------------
    
//-----------------Making Array----------------
    
//--------------doing somthing with it-----------
    for(int i=0; i<size; ++i){
        firstVector[i] = i;
    }
    
    cout<<"Greetings Hooman, your number is: "<<endl;
    usingNodes();
    
};

void Controller :: usingNodes(){
    Node<int>mine(5);
    Node<string> wordHolder("These are words that are saved");
    cout<<mine.getData()<<endl;
    cout<<wordHolder.getData()<<endl;
    wordHolder.setDat("The words have been replaced with these");
    cout<<wordHolder.getData()<<endl;
}
