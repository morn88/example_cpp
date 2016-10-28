#include "array.h"
Array::Array(size_t){
    mySize = size;
    myData = new int[mySize];
}
Array::~Array(){
    delete [] myData;
}
