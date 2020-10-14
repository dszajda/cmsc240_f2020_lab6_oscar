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
   std::cout << "size: "   << dv.size() << " [0]" << std::endl;

   std::cout << "--------------" << std::endl;
   dv.put(97.00);
   dv.put(110.01);
   dv.put(114.00);
   dv.put(101.11);
   dv.put(103,2);

   // test put(value) method and get() method
   std::cout << "get: "   << dv.get(0) << " [97]" << std::endl;
   // test put(value,index) method and get() method
   std::cout << "get: "   << dv.get(2) << " [103]" << std::endl;
   std::cout << "size: "   << dv.size() << " [5]" << std::endl;

   for (int i=0; i<dv.size(); i++){
     std::cout << dv.get(i) << " ";
   }
   std::cout << " [97,110.01,103,114,101.11]" << std::endl;

   std::cout << "--------------" << std::endl;
   dv.put(108,7);
   dv.put(97,-2);
   for (int i=0; i<dv.size(); i++){
     std::cout << dv.get(i) << " ";
   }
   std::cout << " [97,110.01,103,114,101.11,108,97]" << std::endl;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "--------------" << std::endl;
   std::cout << "size: "   << iv.size() << " [0]" << std::endl;

   std::cout << "--------------" << std::endl;
   iv.put(97);
   iv.put(110);
   iv.put(114);
   iv.put(101);
   iv.put(103,2);

   // test put(value) method and get() method
   std::cout << "get: "   << iv.get(0) << " [97]" << std::endl;
   // test put(value,index) method and get() method
   std::cout << "get: "   << iv.get(2) << " [103]" << std::endl;
   std::cout << "size: "   << iv.size() << " [5]" << std::endl;

   for (int i=0; i<iv.size(); i++){
     std::cout << iv.get(i) << " ";
   }
   std::cout << " [97,110,103,114,101]" << std::endl;

   std::cout << "--------------" << std::endl;
   iv.put(108,7);
   iv.put(97,-2);
   for (int i=0; i<iv.size(); i++){
     std::cout << iv.get(i) << " ";
   }
   std::cout << " [97,110,103,114,101,108,97]" << std::endl;
   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   cv2.appendIntegerVector(iv);
   for (int i = 0; i < cv2.size(); i++) {
       std::cout << cv2.get(i) << " ";
   }
   std::cout << " [a n g r e l a]" << std::endl;

   cv2.appendDoubleVector(dv);
   for (int i = 0; i < cv2.size(); i++) {
       std::cout << cv2.get(i) << " ";
   }
   std::cout << " [a n g r e l a a n g r e l a]" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;
   dv2.appendCharacterVector(cv);
   for (int i=0; i<dv2.size(); i++){
     std::cout << dv2.get(i) << " ";
   }
   std::cout << "[]" << std::endl;
   dv2.appendIntegerVector(iv);
   for (int i=0; i<dv2.size(); i++){
     std::cout << dv2.get(i) << " ";
   }
   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "Original code is: [a n g r e l a f z]" << std::endl;
   iv2.appendCharacterVector(cv);
   for (int i=0; i<iv2.size(); i++){
     std::cout << iv2.get(i) << " ";
   }
   std::cout << " [97 110 103 114 101 108 97 102 122]" << std::endl;

   iv2.appendDoubleVector(dv);
   for (int i=0; i<iv2.size(); i++){
     std::cout << iv2.get(i) << " ";
   }
   std::cout << " []" << std::endl;
   //-------------------------------------------------------------------------

   return 0;
}
