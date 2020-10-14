#ifndef __INTEGER_VECTOR_CPP__
#define __INTEGER_VECTOR_CPP__

#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

IntegerVector::IntegerVector()  {}
IntegerVector::~IntegerVector() {}

int IntegerVector::size()
{
   return integerVector.size();
}

// just return the integer at the specified index; use the at() method rather
// than [] so that an out_of_range error will be thrown for an invalid index
int IntegerVector::get(int index)
{
   return integerVector.at(index);
}

// if index is size-legitimate, put the value at that index;
// otherwise, use push_back to append to the end of the vector
void IntegerVector::put(int value, int index)
{
    if(index > (int) integerVector.size() || index < 0){
      integerVector.push_back(value);
    }
    else{
      integerVector.emplace(integerVector.begin()+index, value);
    }
    return;
}

// use push_back to append
void IntegerVector::put(int value)
{
    integerVector.push_back(value);
    return;
}

// for each char in characterVector, use static_cast<int> to append as an
// integer to integerVector
void IntegerVector::appendCharacterVector(CharacterVector& characterVector)
{
    for(int j=0; j<characterVector.size(); j++){
      int app = static_cast<int>(characterVector.get(j));
      integerVector.push_back(app);
    }

}

// for each double in doubleVector, use static_cast<int> to append as an
// integer to integerVector
void IntegerVector::appendDoubleVector(DoubleVector& doubleVector)
{
  for(int j=0; j<doubleVector.size(); j++){
    int temp = static_cast<int>(doubleVector.get(j));
    integerVector.push_back(temp);
  }

}

#endif
