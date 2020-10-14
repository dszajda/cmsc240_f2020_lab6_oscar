#include <iostream>
#include "CharacterVector.h"
#include "DoubleVector.h"
#include "IntegerVector.h"

int main()
{
   CharacterVector cv;
   DoubleVector    dv;
   IntegerVector   iv;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "--------------" << std::endl;
   IntegerVector intvec1;
   std::cout << "size: "   << intvec1.size() << " [0]" << std::endl;

   std::cout << "--------------" << std::endl;
   intvec1.put(1);
   intvec1.put(2);
   intvec1.put(3);
   intvec1.put(5);
   intvec1.put(4,3);

   // test put(value) method and get() method
   std::cout << "get: "   << intvec1.get(0) << " [1]" << std::endl;
   // test put(value,index) method and get() method
   std::cout << "get: "   << intvec1.get(3) << " [4]" << std::endl;
   std::cout << "size: "   << intvec1.size() << " [5]" << std::endl;

   for (int i=0; i<intvec1.size(); i++){
     std::cout << "get: "   << intvec1.get(i) << " [1,2,3,4,5]" << std::endl;
   }

   std::cout << "--------------" << std::endl;
   intvec1.put(7,7);
   intvec1.put(7,-2);
   for (int i=0; i<intvec1.size(); i++){
     std::cout << "get: "   << intvec1.get(i) << " [1,2,3,4,5,7,7]" << std::endl;
   }

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
