//
//  FileController.hpp
//  MegaData
//
//  Created by Peterson, Jacob on 3/27/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Model/DoubleList.hpp"
#include "../Model/FoodItem.hpp"
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class FileController{
private:
    DoubleList<FoodItem> foodItemList;
    
public:
    DoubleList<FoodItem> readDataFromFile(string filename);
    void writeFoodItemDataStatistis(DoubleList<FoodItem> sourc, string filename);
};

#endif /* FileController_hpp */
