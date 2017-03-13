//
//  FoodItem.cpp
//  MegaData
//
//  Created by Peterson, Jacob on 3/13/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#include "FoodItem.hpp"

FoodItem ::  FoodItem(){
    this->calories = 666;
    this->foodName = "Taco Time";
    this->cost=123.21;
    this->delicious = false;
}

FoodItem :: FoodItem(string name){
    this->calories = 666;
    this->foodName = name;
    this->cost=123.21;
    this->delicious = false;
}

int FoodItem:: getCalories(){
    return calories;
}

double FoodItem:: getCost(){
    return cost;
}

string FoodItem:: getFoodName(){
    return foodName;
}

bool FoodItem:: isDelicious(){
    return delicious;
}

void FoodItem:: setCalories(int cals){
    this->calories = cals;
}

void FoodItem:: setCost(double cost){
    this->cost = cost;
}

void FoodItem :: setFoodName(string foodName){
    this->foodName = foodName;
}

void FoodItem:: setDelicious(bool delicious){
    this->delicious = delicious;
}


