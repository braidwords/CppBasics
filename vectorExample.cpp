#include<iostream>
#include<vector>
#include <string>

class StudentDetails
{
    public:

    int student_roll_number = 0;
    std::string student_name;
    std::vector< StudentDetails> Students;
};