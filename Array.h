//
//  Array.h
//  MegaData
//
//  Created by Peterson, Jacob on 2/15/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#ifndef Array_h
#define Array_h

template <class Type>
class Array{
    
private:
    Node<Type> * front;
    int size;
    
public:
    Array();
    Array(int size);
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
    int getSize();
};

#endif /* Array_h */
