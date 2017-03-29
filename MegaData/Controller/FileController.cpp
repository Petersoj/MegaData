//
//  FileController.cpp
//  MegaData
//
//  Created by Peterson, Jacob on 3/27/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#include "FileController.hpp"

DoubleList<FoodItem> FileController :: readDataFromFile(string filename)
{
    DoubleList<FoodItem> dataSource;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            stringstream parseCSV(currentCSVLine);
            
            string title, tempCost, tempCalorie, tempTasty;
            double cost;
            int calories;
            bool isDelish;
            
            getline(parseCSV, title, ',');
            getline(parseCSV, tempCost, ',');
            getline(parseCSV, tempCalorie, ',');
            getline(parseCSV, tempTasty, ',');
            
            if (rowCount != 0)
            {
                cost = stod(tempCost);
                calories =stoi(tempCalorie);
                isDelish = stoi(tempTasty);
                
                FoodItem temp(title);
                temp.setCost(cost);
                temp.setCalories(calories);
                temp.setDelicious(isDelish);
                
                dataSource.add(temp);
            }
            rowCount++;
            
            cout << currentCSVLine << endl;
        }
        dataFile.close();
    }
    else
    {
        cerr<< "NO FILE" << endl;
    }
    
    return dataSource;
}
