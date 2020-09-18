/*There are various primitive datatypes in C++
Every datatype takes a different size in the memory*/

#include<iostream>
using namespace std;

class primitiveDataType
{
public:
    int value1;
    char value2;
    float value3;
    double value4;
    bool value5;
    void getSize()
    {

        std::cout << "The size of an integer value is: " << sizeof(value1) << '\n';;
        std::cout << "The size of a char is: " << sizeof(value2) << std::endl;;
        std::cout << "The size of a float value is " << sizeof(value3) << std::endl;;
        std::cout << "The size of a double value is: " << sizeof(value4) << std::endl;;
        std::cout << "The size of a bool value is: " << sizeof(value5) << std::endl;;
    }
};
