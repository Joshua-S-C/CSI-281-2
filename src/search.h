//
//  search.h
//  
//  Functions for doing linear search and binary search on an
//  arbitrary array.
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#ifndef search_hpp
#define search_hpp

namespace csi281 {
    
    /*DONE*/
    // Returns the first location of the found key
    // or -1 if the key is never found
    template <typename T>
    int linearSearch(T array[], const int length, const T key) {
        // Iterate, return equal
        for (int i = 0; i < length; i++) {
            if (array[i] == key) {
                return i;
            }
        }
        return -1;
    }
    
    /*DONE*/
    // Returns the first location of the found key
    // or -1 if the key is never found; assumes a sorted array
    template <typename T>
    int binarySearch(T array[], const int length, const T key) {
        int lower = 0, upper = length -1, index;

        while (lower <= upper) {
            index = (lower + upper) / 2;

            if (key == array[index]) { 
                return index;
            }

            if (key < array[index]) {
                upper = index - 1;
                continue;
            }

            if (key > array[index]) {
                lower = index + 1;
                continue;
            }
        }

        return -1;
    }
}


#endif /* search_hpp */
