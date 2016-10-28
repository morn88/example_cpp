#ifndef ARRAY_H
#define ARRAY_H
class Array{
private:
    size_t mySize;
    int *myData;
public:
    Array(size_t size);
    ~Array();
};

#endif // ARRAY_H
