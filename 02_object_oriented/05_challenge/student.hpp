#pragma once

#include <string>
#include <vector>
#include <iostream>

#include "teacher.hpp"
//#include "school.hpp"

class Student
{
public:
    Student(const std::string &s_name);
    void assignTeacher(Teacher *teature);
    std::string getStudentName() const;
    void printInfo_s() const;
    void printTeachers() const;


private:
    std::string s_name;
    std::vector<Teacher *> teachers;

};