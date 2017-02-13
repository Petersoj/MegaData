//
//  IntNodeArray.cpp
//  MegaDatas
//
//  Created by Peterson, Jacob on 2/8/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#include "IntNodeArray.hpp"
#include "IntNode.hpp"
#include <assert.h>

IntNodeArray :: IntNodeArray(int size){
    assert(size > 0);
    
    this->front = new IntNode();
    this->size = size;
    
    for(int index = 1; index < size; index++){
        IntNode * current = new IntNode();
        current->setNodePointer(front);
        front = current;
    }
}

int IntNodeArray :: getFromIndex(int index){
    assert(index >= 0 && index < size);
    int value = 0;
    
    IntNode * current = front;
    for(int posistion = 0; posistion < index; posistion++){
        current = current->getNodePointer();
    }
    
    value = current->getNodeData();
    
    return value;
}

int IntNodeArray:: getSize(){
    return size;
}

//void setAtIndex(int index, int value){
//    assert(index >= 0 && index < size);
//    
//    IntNode * current = front;
//    
//    for(int spot = 0; spot < index; spot++){
//        current = current
//    }
//}
