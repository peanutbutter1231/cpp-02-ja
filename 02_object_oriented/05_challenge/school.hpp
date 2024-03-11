#pragma once

#include <string>
#include <vector>
#include <iostream>

#include "student.hpp"
#include "teacher.hpp"

class Student;
class Teacher;

class School
{
public:
    void enrollStudent(Student *student);
    void hireTeacher(Teacher *teacher);
    void assignStudenttoTeacher(Student *student, Teacher *teacher);
    void printInfo_g() const;

private:
    std::vector<Teacher *> teachers;
    std::vector<Student *> students;
};