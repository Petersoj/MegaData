//
//  Tree.h
//  ArrayProject
//
//  Created by Peterson, Jacob on 4/11/17.
//  Copyright © 2017 Peterson, Jacob. All rights reserved.
//



// //  Tree.hpp //  MorningMegaProject // //  Created by Aricck Peterson on 3/30/17. //  Copyright Â© 2017 CTEC. All rights reserved. //
#ifndef Tree_h 
#define Tree_h
#include <assert.h>

template <class Type> class Tree
{
public:
    //Traversals
    virtual void inOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    //Informational Methods
    virtual int getHeight() = 0;
    virtual int getSize() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //Data Methods
    virtual bool contains(Type value) = 0;
    virtual void insert(Type itemToInsert) = 0;
    virtual void remove(Type value) = 0;
};
#endif /* Tree_h */
    
