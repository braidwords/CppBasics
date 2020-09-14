#include<vector>
#include <iostream>


/* By default, a class in C++ makes its variables and data structures inaccessible/private.
It is important to make them public if you want them to be accessible outside the class*/

class vectorIterator
{
public:

    std::vector<int> values;

public:
    void input_values()
    {
        /*We can also use a range based for loop to do this same task in a cleaner way.The below shown loop is range based for loop.*/
        /*for (int value : values)
        {
            std::cout << "Enter values:";
            std::cin >> value;
            values.push_back(i);
        }*/
        for (int i = 0; i < 10; ++i) 
        {
            std::cout << "Enter values:";
            std::cin >> i;
            values.emplace_back(i);
        }
    }

    void print_values()
    {
        for (std::vector<int>::iterator itr = values.begin(); itr != values.end(); ++itr) 
            /*Instead of post-increment here, we must use pre-increment due to efficiency reasons.
            The reason is in case of post-increment, it holds the previous value by creating a new object, return it and then increment its value. This slows the execution of the code*/
        {
            std::cout << "The elements in the vector are: ";
            std::cout << *itr << std::endl; // To print the values/data,you must de-reference the iterator. 
        }

    }

};
