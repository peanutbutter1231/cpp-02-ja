#include <string>
#include <vector>
#include <iostream>

#include "student.hpp"
#include "teacher.hpp"
#include "school.hpp"

main(){
    School schoolA;

    //create students
    Student student1("Alice");
    Student student2("Bob");
    Student student3("Cathey");

    //create teachers
    Teacher teacher1("Denney");
    Teacher teacher2("Edward");

    //hire teacher
    schoolA.hireTeacher(&teacher1);
    schoolA.hireTeacher(&teacher2);

    //enroll student
    schoolA.enrollStudent(&student1);
    schoolA.enrollStudent(&student2);
    schoolA.enrollStudent(&student3);

    //assing student
    schoolA.assignStudenttoTeacher(&student1, &teacher1);
    schoolA.assignStudenttoTeacher(&student2, &teacher1);
    schoolA.assignStudenttoTeacher(&student2, &teacher2);
    schoolA.assignStudenttoTeacher(&student3, &teacher2);

    //print
//    student1.printInfo_s();
//    student2.printInfo_s();
//    student3.printInfo_s();
//    teacher1.printInfo_t();
//    teacher2.printInfo_t();
    schoolA.printInfo_g();

    teacher1.printStudents();
    teacher2.printStudents();

    student1.printTeachers();
    student2.printTeachers();
    student3.printTeachers();

    return 0;
}
