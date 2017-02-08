//
//  IntNodeArray.hpp
//  MegaDatas
//
//  Created by Peterson, Jacob on 2/8/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#ifndef IntNodeArray_hpp
#define IntNodeArray_hpp

#include <stdio.h>
#include "IntNode.hpp"

class IntNodeArray{
    
private:
    IntNode * front;
    int size;
    
public:
    IntNodeArray(int size);
    void setAtIndex(int index, int value);
    int getFromIndex(int index);
    int getSize();
};

#endif /* IntNodeArray_hpp */
