#ifndef __CHARACTER_VECTOR_CPP__
#define __CHARACTER_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

CharacterVector::CharacterVector()  {}
CharacterVector::~CharacterVector() {}

int CharacterVector::size() 
{  
   return this.size();
}

// just return the character at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
char CharacterVector::get(int index) 
{ 
   return this.at(index);
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void CharacterVector::put(char value, int index)
{
    if (index > 0 && index < this.size() - 1) {
        auto it = this.begin() + index;
        this.insert(it, value);
    } else {
        this.push_back(value);
    }
}

// use push_back to append
void CharacterVector::put(char value)
{
    this.push_back(value);
}

// for each double in doubleVector, use static_cast<char> to append as a
// character to characterVector
void CharacterVector::appendDoubleVector(DoubleVector& doubleVector)
{
    for (unsigned val = 0; val < doubleVector.size(); val++) {
        char cterm = static_cast<char>(doubleVector.at(val));
	this.push_back(cterm);
    }
}

// for each integer in integerVector, use static_cast<char> to append as a
// character to characterVector
void CharacterVector::appendIntegerVector(IntegerVector& integerVector)
{
    for (unsigned val = 0; val < integerVector.size(); val++) {
	char cterm = static_cast<char>(integerVector.at(val));
	this.push_back(cterm);
    }
}

#endif
