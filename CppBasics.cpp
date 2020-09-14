#include <iostream>
#include "Integer_Assignment.h"
#include "add.h"
#include "statusMessage.cpp"
#include "hexExample.h"
#include "calculateTotalCost.h"
#include "VariableShadowing.cpp"
#include"vectorExample.cpp"
#include<vector>
#include "pointerExample.cpp"
#include "vectorIterator.cpp"

/*int g_myvariable; //global variable declared; the scope remains throughput the program.By default, the value is initialized by 0.
//using namespace std;
int add(int a, int b);*/
class student
{
public:
    int roll_num=1;
    std::string student_name="Kusum Negi";
};
void Increment(int& c);

int main()
{
    student student_object;
    vectorIterator vectorIterator;
    student_object.roll_num;
    std::cout << student_object.roll_num << std::endl;
    std::cout << student_object.student_name << std::endl;
    //StudentDetails details;
    //std::vector<int> numbers;
   // numbers.reserve(10);
    /*VariableShadowing var;
        std::cout << "The value of g_myvariable is: " << g_myvariable << '\n'; //this will print the default initialized value of global variable.
        Integer_Assignment m;
        std::cout << "Enter a number: " << '\n';
        int x{ };
        std::cin >> x;
        if (x > 0) {
            std::cout << "You entered: \t" << x << '\n'; //'\t inserts a tab
            int y{ m.double_userData(x) };
            std::cout << C_ok << '\n' << "Your result shoild be: " << y << '\n';
            std::cout << "The sum of two number is: " << add(2, 3) << '\n';
            std::cout << sizeof(int) << '\n'; //sizeof is an operator that returns the size of a variable/data type in bytes. It is an unary operator.
            std::cout << sizeof(long) << '\n';;
            std::cout << sizeof(double) << '\n';
            std::cout << sizeof(float) << '\n';
            std::cout << sizeof(char) << '\n';
            std::cout << sizeof(bool) << '\n';
            std::cout << sizeof(long long) << '\n';
            printHex();
            userData();
            var.printNames();*/

            /*details.Students.push_back({ 1, "kusum" });
            std::cout << "The capacity of the vector is: " << details.Students.capacity() << '\n';
            details.Students.push_back({ 2, "Mukesh" });
            std::cout << "The capacity of the vector is: " << details.Students.capacity() << '\n';
            details.Students.push_back({ 3, "Nikku" });
            std::cout << "The size of the vector is: " << details.Students.size() << '\n';
            std::cout << "The capacity of the vector is: " << details.Students.capacity() << '\n';*/
            /*for (int i = 0; i < 10; i++)
            {
               numbers.push_back(i+		myptr	0x000000ac6a0ffb64 {10}	int *
);
               std::cout << "The size is: "<<numbers.size() <<      "The capacity of the vector is: " << numbers.capacity() << '\n';
            }*/
    
    int a = 10;
    int b = 19;
    int c = 100;

    /*Pointer is nothing but an integer value that points a memory address of your data*/
    int* myptr = &a; //pointer 
    int* myptr1 = &b; //pointer 
    /*dereferencing a pointer; we usually do this when we want to read/write our data residing in the memory area where it is pointing.
    This actually points to the data residing in the memory address.So, here *ptr means the value/data which is inside the   */
    *myptr = 15; 
    std::cout << myptr << std::endl;
    std::cout << myptr1 << std::endl;
    char* data = new char[8];
    memset(data, 10, 8);
    char** add_data = &data;
   // delete[] data;
    /*Refrences in C++ are pretty much confused with the pointers but they are just the aliases to the variables.
    They are not like pointers means they do not take space in the memory like pointer variables take. */
   
    int& myref=c;
    std::cout << myref << std::endl;
    myref = 200;
    std::cout << myref << std::endl;
    Increment(myref);
    std::cout << myref << std::endl;

    vectorIterator.input_values();
    vectorIterator.print_values();
    return 0;
}
void Increment(int& c)
{
    c++;
    return;
}