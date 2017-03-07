//
//  DoublyLinkedList.h
//  MegaData
//
//  Created by Peterson, Jacob on 3/1/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#ifndef DoublyLinkedList_h
#define DoublyLinkedList_h

#include "BiDirectionalNode.h"
#include "CircularList.h"

template <class Type>
class DoublyLinkedList
{
private:
    BiDirectionalNode<Type> * front;
    BiDirectionalNode<Type> * end;
    int size;
public:
    DoublyLinkedList();
    int getSize() const;
    
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
int DoublyLinkedList<Type> :: getSize() const {
    return size;
}

template <class Type>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getFront() const {
    return front;
}


template <class Type>
BiDirectionalNode<Type> * DoublyLinkedList<Type> :: getEnd() const {
    return end;
}

#endif /* DoublyLinkedList_h */
