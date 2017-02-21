//
//  DataStructureController.hpp
//  MegaDatas
//
//  Created by Peterson, Jacob on 2/8/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//
#ifndef DataStructureController_hpp
#define DataStructureController_hpp

#include "../Model/Node.hpp"
#include "../Model/Array.h"
#include <string>

using namespace std;

class DataStructureController {
    
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
    void testAdvancedFeatures();
public:
    DataStructureController();
    void start();
};

#endif /*DataStructureController*/
