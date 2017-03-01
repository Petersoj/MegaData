//
//  CircularList.h
//  MegaData
//
//  Created by Peterson, Jacob on 3/1/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "DoublyLinkedList.h"

template <class Type>
class CircularList : public DoublyLinkedList<Type> {
    
private:
    // No need to redefine the private data members!
public:
    CircularList();
    ~CircularList();
    
    void add(Type data);
    Type remove(int index);
    
};

template <class Type>
CircularList<Type> :: CircularList() : DoublyLinkedList() {
    // deal with circle list stuff only
    
}

template <class Type>
void CircularList<Type> :: add(Type data) {
    
}

#endif /* CircularList_h */
