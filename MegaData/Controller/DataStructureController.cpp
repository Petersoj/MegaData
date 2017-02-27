//
//  DataStructureController.cpp
//  MegaDatas
//
//  Created by Peterson, Jacob on 2/8/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNode.hpp"
#include "../Model/IntNodeArray.hpp"
#include "List.h"

using namespace std;

DataStructureController :: DataStructureController(){
    wordNode = Node<string>();
    numberNode = Node<int>();
}

void DataStructureController :: start(){
    testList();
}

void DataStructureController:: testAdvancedFeatures(){
    int showDestructor = 0;
    
    if(showDestructor < 1){
        Array<string> words = Array<string>(5);
        cout << "There should be message about destructor next" << endl;
    }
    Array<string> words = Array<string>(4);
    words.setAtIndex(0, "at zero");
    words.setAtIndex(3, "Int the last spot");
    Array<string> copiedWords = Array<string>(words);
    
    cout << "These should match: " << endl;
    cout << words.getFromIndex(0) << " Should be the same as " << copiedWords.getFromIndex(0) << endl;
}

void DataStructureController :: testIntArray(){
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for(int index = 0; index < 3; index++){
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
}

void DataStructureController:: testList(){
    List<string> taco;
    taco.addFront("Welcome to disneyland");
    taco.addEnd("The end is nigh.");
    taco.addAtIndex(1, "This is the 2nd (3rd) pos");
    taco.addEnd("Conman");
    
    cout << "Contains \"Conman\"? " << taco.contains("Conman") << endl << endl;
    
    for(int index = 0; index < taco.getSize(); index++){
        cout << taco.getFromIndex(index) << " is at index: " << index << endl;
    }
    
    taco.remove(3);
    
    cout << "Size: " << taco.getSize() << endl << endl;
    cout << "Contains \"Conman\"? " << taco.contains("Conman") << endl << endl;
}

void DataStructureController:: testNodes(){
    cout << "The contentes of Node<stinrg>" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "Here is the Node<int>" << endl;
    cout << numberNode.getNodeData() << endl;
}
