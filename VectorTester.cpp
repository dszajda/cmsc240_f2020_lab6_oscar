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

   // test empty vector
   std::cout << "size: " <<  cv.size() << " [0]" << std::endl;
   
   // test put() method with single value
   cv.put('a');
   cv.put('n');
   cv.put('e');
   for (int i = 0; i < cv.size(); i++) {
       std::cout << cv.get(i) << " ";
   }
   std::cout << " [a n e]" << std::endl;

   // test put() method at a specific index
   cv.put('g', 2);
   for (int i = 0; i < cv.size(); i++) {
       std::cout << cv.get(i) << " ";
   }
   std::cout << " [a n g e]" << std::endl;
   cv.put('l');
   cv.put('a');
   for (int i = 0; i < cv.size(); i++) {
       std::cout << cv.get(i) << " ";
   }
   std::cout << " [a n g e l a]" << std::endl;

   cv.put('r', 3);
   cv.put('f', 9);
   cv.put('z', -1);
   for (int i = 0; i < cv.size(); i++) {
       std::cout << cv.get(i) << " ";
   }
   std::cout << " [a n g r e l a f z]" << std::endl;
   std::cout << "size: " << cv.size() << " [9]" <<  std::endl;

  // test get() method directly
   std::cout << "get: " << cv.get(0) << " [a]" << std::endl;
   std::cout << "get: " << cv.get(5) << " [l]" << std::endl;

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
   IntegerVector iv1;
   std::cout << "size: "   << iv.size() << " [0]" << std::endl;

   std::cout << "--------------" << std::endl;
   iv.put(1);
   iv.put(2);
   iv.put(3);
   iv.put(5);
   iv.put(4,3);

   // test put(value) method and get() method
   std::cout << "get: "   << iv.get(0) << " [1]" << std::endl;
   // test put(value,index) method and get() method
   std::cout << "get: "   << iv.get(3) << " [4]" << std::endl;
   std::cout << "size: "   << iv.size() << " [5]" << std::endl;

   for (int i=0; i<iv.size(); i++){
     std::cout << "get: "   << iv.get(i) << " [1,2,3,4,5]" << std::endl;
   }

   std::cout << "--------------" << std::endl;
   iv.put(7,7);
   iv.put(7,-2);
   for (int i=0; i<iv.size(); i++){
     std::cout << "get: "   << iv.get(i) << " [1,2,3,4,5,7,7]" << std::endl;
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
