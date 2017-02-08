//
//  IntNode.cpp
//  MegaDatas
//
//  Created by Peterson, Jacob on 2/8/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#include "IntNode.hpp"

IntNode :: IntNode(){
    this->nodePointer = 0;
    this->nodeData = -9999;
}

IntNode :: IntNode(int value){
    this->nodePointer = 0;
    this->nodeData = value;
}
IntNode :: IntNode(int value, IntNode * nodePointer){
    this->nodeData = value;
    this->nodePointer = nodePointer;
}

void IntNode :: setNodeData(int newValue){
    nodeData = newValue;
}

void IntNode :: setNodePointer(IntNode * nodePointer){
    this->nodePointer = nodePointer;
}

int IntNode :: getNodeData(){
    return nodeData;
}

IntNode * IntNode :: getNodePointer(){
    return nodePointer;
}
