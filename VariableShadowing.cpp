#include<iostream>

//The concept is variable shadowing/name hiding.The global variables and variables declared and initiliazed in the inner block are hidden by the variable of same name initialized in the inner block.
// When inside the nested block, there’s no way to directly access the shadowed variable from the outer block.

class VariableShadowing {
public:
    void printNames() {
        int a{ 10 };
        {
            std::cout << "The value of outside variable is: " << a << '\n';
            int a{ 100 };
            std::cout << "Scope of local variable a will come into play now. The value of a is: " << a << '\n';
        }
        std::cout << "The value of outer block variable will come into play now. The local variable of inside block is dead now. The value of a is: " << a << '\n';
    }
};