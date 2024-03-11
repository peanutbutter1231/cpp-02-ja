#include <string>
#include <vector>
#include <iostream>

#include "student.hpp"
#include "teacher.hpp"
#include "school.hpp"

Teacher::Teacher(const std::string &t_name) : t_name(t_name){};

void Teacher::assignStudent(Student *student)
{
    students.push_back(student);
}

std::string Teacher::getTeacherName() const
{
    return t_name;
}

void Teacher::printInfo_t() const
{
    std::cout << "Teacher Name : " << t_name << std::endl;
}

void Teacher::printStudents() const
{
    std::cout << "Students assigned to " << t_name << " :\n";
    for (const Student *p : students)
    {
        std::cout << p->getStudentName() << "\n";
    }
    std::cout << "\n";
}
