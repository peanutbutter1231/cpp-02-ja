#include <string>
#include <vector>
#include <iostream>

#include "student.hpp"
#include "teacher.hpp"
#include "school.hpp"

void School::enrollStudent(Student *student)
{
    students.push_back(student);
}

void School::hireTeacher(Teacher *teacher)
{
    teachers.push_back(teacher);
}

void School::assignStudenttoTeacher(Student *student, Teacher *teacher)
{
    teacher->assignStudent(student);
    student->assignTeacher(teacher);
}

void School::printInfo_g() const
{
    std::cout << "School_A has follow teachers : "
              << "\n";
    for (const Teacher *p : teachers)
    {
        std::cout << p->getTeacherName() << std::endl;
    }
    std::cout << "\n";

    std::cout << "School_A has follow students : "
              << "\n";
    for (const Student *p : students)
    {
        std::cout << p->getStudentName() << std::endl;
    }
    std::cout << "\n";
}
