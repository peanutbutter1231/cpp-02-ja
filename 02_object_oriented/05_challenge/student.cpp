#include <string>
#include <vector>
#include <iostream>

#include "student.hpp"
#include "teacher.hpp"
#include "school.hpp"

Student::Student(const std::string &s_name) : s_name(s_name){};

void Student::assignTeacher(Teacher *teacher)
{
    teachers.push_back(teacher);
}

std::string Student::getStudentName() const
{
    return s_name;
}

void Student::printInfo_s() const
{
    std::cout << "Student Name : " << s_name << std::endl;
}

void Student::printTeachers() const
{
    std::cout << "Teachers assigned to " << s_name << " :\n";
    for (const Teacher *p : teachers)
    {
        std::cout << p->getTeacherName() << "\n";
    }
    std::cout << "\n";
}
