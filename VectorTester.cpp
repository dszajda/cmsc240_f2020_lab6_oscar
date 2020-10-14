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

   CharacterVector testcv;

   std::cout << "size: " <<  testcv.size() << " [0]" << std::endl;
   testcv.put('a');
   testcv.put('n');
   testcv.put('e');
   for (int i = 0; i < testcv.size(); i++) {
       std::cout << testcv.get(i) << " ";
   }
   std::cout << " [a n e]" << std::endl;

   testcv.put('g', 2);
   for (int i = 0; i < testcv.size(); i++) {
       std::cout << testcv.get(i) << " ";
   }
   std::cout << " [a n g e]" << std::endl;
   testcv.put('l');
   testcv.put('a');
   for (int i = 0; i < testcv.size(); i++) {
       std::cout << testcv.get(i) << " ";
   }
   std::cout << " [a n g e l a]" << std::endl;

   testcv.put('r', 3);
   testcv.put('f', 9);
   testcv.put('z', -1);
   for (int i = 0; i < testcv.size(); i++) {
       std::cout << testcv.get(i) << " ";
   }
   std::cout << " [a n g r e l a f z]" << std::endl;
   std::cout << "size: " << testcv.size() << " [9]" <<  std::endl;

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
