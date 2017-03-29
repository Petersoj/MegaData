//
//  FoodItem.hpp
//  MegaData
//
//  Created by Peterson, Jacob on 3/13/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#ifndef FoodItem_hpp
#define FoodItem_hpp

#include "FoodItem.hpp"
#include <string>

using namespace std;

class FoodItem
{
private:
    int calories;
    string foodName;
    double cost;
    bool delicious;
public:
    FoodItem();
    FoodItem(string name);
    
    int getCalories();
    double getCost();
    string getFoodName();
    bool isDelicious();
    
    void setCalories(int calories);
    void setFoodName(string name);
    void setCost(double cost);
    void setDelicious(bool delicious);
    
    bool operator < (FoodItem & otherFood);
    bool operator > (FoodItem & otherFood);
    bool operator == (FoodItem & otherFood);
};

#endif /* FoodItem_hpp */
