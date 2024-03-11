#pragma once

#include <string>
#include <vector>
#include <iostream>

#include "student.hpp"
#include "school.hpp"

class Teacher
{
public:
    Teacher(const std::string &t_name);
    void assignStudent(Student *student);
    std::string getTeacherName() const;
    void printInfo_t() const;
    void printStudents() const;

private:
    std::string t_name;
    std::vector<Student *> students;
};