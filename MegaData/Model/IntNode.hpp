//
//  IntNode.hpp
//  MegaDatas
//
//  Created by Peterson, Jacob on 2/8/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#ifndef IntNode_hpp
#define IntNode_hpp

#include <stdio.h>

class IntNode {
    
private:
    int nodeData;
    IntNode * nodePointer;
public:
    IntNode();
    IntNode(int value);
    /*
     * Creates an IntNode with a specified value and nextPointer
     *
     */
    IntNode(int value, IntNode * nextNode);
    
    // Methods
    
    int getNodeData();
    IntNode * getNextPointer();
    
    void setNodeData(int value);
    void setNextPointer(IntNode* nextNode);
};


#endif /* IntNode_hpp */
