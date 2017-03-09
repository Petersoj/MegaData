//
//  CircularList.hpp
//  ArrayProject
//
//  Created by Smith, Arick on 3/1/17.
//  Copyright © 2017 Smith, Arick. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "DoublyLinkedList.hpp"

template <class Type>
class CircularList : public DoublyLinkedList<Type>
{
private:
    //no need to redefine private data members.
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    Type remove(int index);
    //other methods.
    
    
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList<Type>()
{
    //deal with circle list stuff only here.
    
}

template <class Type>
void CircularList<Type> :: add(Type data)
{
    
}
#endif /* CircularList_h */
