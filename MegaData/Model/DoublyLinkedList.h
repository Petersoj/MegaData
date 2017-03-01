//
//  DoublyLinkedList.h
//  MegaData
//
//  Created by Peterson, Jacob on 3/1/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include "BiDirectionalNode.hpp"
#include "CircularList.h"

#include "BiDirectionalNode.hpp"

template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * endl;
    int size;
public:
    DoublyLinkedList();
    getSize() const;
    
    virtual ~DoublyLinkedList() = 0;
    BiDirectionalNode<Type> * getFront() const;
    BiDirectionalNode<Type> * getEnd() const;
    
    virtual void add(Type data) = 0;
    virtual Type remove(int index) = 0;
};

template <class Type>
DoublyLinkedList<Type> :: DoublyLinkedList() {
    size = 0;
    front = nullptr;
    end = nullptr;
}

template <class Type>
int CoubleLinkedList<Type> :: getSize() {
    return size;
}

template <class Type>
BiDirectionaNode<Type> * DoublyLinkedList<Type :: getFront() {
    return front;
}


template <class Type>
BiDirectionaNode<Type> * DoublyLinkedList<Type :: getEnd() {
    return end;
}

#endif /* DoublyLinkedList_h */
