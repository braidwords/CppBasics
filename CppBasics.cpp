#include <iostream>
#include "Integer_Assignment.h"
#include "add.h"
#include "statusMessage.cpp"
#include "hexExample.h"
#include "calculateTotalCost.h"
#include "VariableShadowing.cpp"

int g_myvariable; //global variable declared; the scope remains throughput the program.By default, the value is initialized by 0.
//using namespace std;
int add(int a, int b);

int main()
{
    
        VariableShadowing var;
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
            var.printNames();
    return 0;
    }
}